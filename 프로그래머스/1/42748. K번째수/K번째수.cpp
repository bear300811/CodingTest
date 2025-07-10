#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int index = 0;
    for(int i = 0;i<commands.size();i++)
    {
        int a = commands[i][0]-1;
        int b = commands[i][1];
        int c = commands[i][2]-1;
        
        vector<int> temp(array.begin()+a,array.begin()+b);
        sort(temp.begin(),temp.end());
        answer.push_back(temp[c]);
    }
    return answer;
}