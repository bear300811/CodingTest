#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    vector<pair<int,bool>> pro;
    for(int i = 0;i<priorities.size();++i)
    {
        pro.push_back({priorities[i],i == location});
    }
    while(true)
    {
        int max_num = -1;
        for (auto &p : pro) { max_num = max(max_num, p.first); }
        auto cur = pro.front();
        pro.erase(pro.begin());
        if(max_num>cur.first)
        {
             pro.push_back(cur);
        }
        else
        {
            answer++;
            if(cur.second)
            {
                break;
            }
        }
    }
    
    
    
    return answer;
}