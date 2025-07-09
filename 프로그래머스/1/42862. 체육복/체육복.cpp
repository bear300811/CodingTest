#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    sort(lost.begin(),lost.end());
    sort(reserve.begin(),reserve.end());
    
    vector<int> RealLost;
    vector<int> RealReserve;
    
    for(int i : lost)
    {
        if(find(reserve.begin(),reserve.end(),i)!=reserve.end())
        {
            reserve.erase(find(reserve.begin(),reserve.end(),i));
        }
        else
        {
            RealLost.push_back(i);
        }
    }
    RealReserve = reserve;
    int answer = n - RealLost.size();
    for(int& l : RealLost)
    {
        auto it = find(RealReserve.begin(),RealReserve.end(),l-1);
        if(it !=RealReserve.end())
        {
            answer++;
            RealReserve.erase(it);
            continue;
        }
    

        it = find(RealReserve.begin(),RealReserve.end(),l+1);
        if(it !=RealReserve.end())
        {
            answer++;
            RealReserve.erase(it);
        }
    }


    
    return answer;
}