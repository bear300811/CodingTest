#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    answer.resize(arr1.size());
    for(int i = 0;i<arr1.size();++i)
    {
        for(int k = 0;k<arr2[0].size();++k)
        {
            int multi = 0;
            for(int j = 0;j<arr1[i].size();++j)
            {
                multi += arr1[i][j] * arr2[j][k];
            }
            answer[i].push_back(multi);
        }
    }
    
    return answer;
}