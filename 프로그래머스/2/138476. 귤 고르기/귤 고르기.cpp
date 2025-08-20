#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<int> time;
    unordered_map <int,int> Times;
    for(int& Mandarin : tangerine)
    {
        Times[Mandarin]++;
    }
    for(auto it : Times)
    {
        time.push_back(it.second);
    }
    sort(time.begin(),time.end(),greater<int>());
    int t = 0;
    while(k>0)
    {
        k -= time[t];
        answer++;
        t++;
    }
    return answer;
}