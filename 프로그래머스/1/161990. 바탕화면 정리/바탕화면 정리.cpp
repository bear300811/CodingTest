#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    unordered_set<int> lux;
    unordered_set<int> luy;
    for(int i = 0; i<wallpaper.size();i++)
    {
        for(int j=0;j<wallpaper[i].size();j++)
        {
            if(wallpaper[i][j]=='#')
            {
                lux.insert(i);
                luy.insert(j);
            }
        }
    }
    vector<int> x(lux.begin(), lux.end());
    vector<int> y(luy.begin(), luy.end());
    
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    
    answer.push_back(x[0]);
    answer.push_back(y[0]);
    
    answer.push_back(x.back()+1);
    answer.push_back(y.back()+1);
    
    
    return answer;
}