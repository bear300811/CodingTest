#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days(progresses.size());
    for(int i = 0;i<speeds.size();++i)
    {
        int need = max(0,100 - progresses[i]);
        days[i] = (need + speeds[i] - 1) /speeds[i];
    }
    int cur = days[0];
    int cnt = 1;
    for(int i = 1; i<days.size();++i)
    {
        if(days[i] <= cur) {cnt++;}
        else
        {
            answer.push_back(cnt);
            cur = days[i];
            cnt = 1;
        }
    }
    answer.push_back(cnt);
    return answer;
}