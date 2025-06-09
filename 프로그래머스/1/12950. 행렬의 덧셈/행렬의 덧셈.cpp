#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int a = arr1.size();
    int b = arr1[0].size();
    vector<vector<int>> answer(a,vector<int>(b));
    for(int i =0;i<a;i++){
        for(int j =0;j<b;j++){ answer[i][j] = arr1[i][j] + arr2[i][j];}
    }
    
    return answer;
}