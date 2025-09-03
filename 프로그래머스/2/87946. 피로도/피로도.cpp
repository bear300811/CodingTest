#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int answer = 0;
vector<bool> visited;

void dfs(int k,int visitor, const vector<vector<int>>& dungeons){
    answer = max(answer,visitor);
    for(int i = 0;i<dungeons.size();++i)
    {
        if(!visited[i] && k>= dungeons[i][0])
        {
            visited[i] = true;
            dfs(k-dungeons[i][1],visitor+1,dungeons);
            visited[i] = false;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    answer = 0;
    visited.assign(dungeons.size(),false);
    dfs(k,0,dungeons);
    
    return answer;
}