#include <string>
#include <vector>

using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    int n = order.size();
    
    vector<int> second;
    second.reserve(n);
    
    int i = 0;
    for(int j = 1; j<= n;++j)
    {
        second.push_back(j);
         while (!second.empty() && i < n && second.back() == order[i]) 
         {
            second.pop_back();
            ++answer;
            ++i;
        }
    }
    return answer;
}