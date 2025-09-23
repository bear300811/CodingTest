#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int> bridge;  
    for (int k = 0; k < bridge_length; ++k) 
    {
        bridge.push(0);
    }
    int n = truck_weights.size();
    int sum = 0;
    int index = 0;
    
    while(n > index || sum > 0)
    {
        sum -= bridge.front();
        bridge.pop();
        if(index<n && sum + truck_weights[index] <= weight)
        {
            bridge.push(truck_weights[index]);
            sum += truck_weights[index];
            ++index;
        }
        else
        {
            bridge.push(0);
        }
        answer++;
    }
    return answer;
}