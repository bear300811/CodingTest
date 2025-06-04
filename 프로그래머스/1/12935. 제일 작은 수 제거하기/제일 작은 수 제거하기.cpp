#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    int min= answer[0];
    for(int i =0;i<answer.size();i++){
        if(answer[i]<min){ min = answer[i];}
    } 
     for(int j =0;j<answer.size();j++){
         if(answer[j]==min) { answer.erase(answer.begin()+j);}
     }
    if(answer.empty())  {answer.push_back(-1);}
    return answer;
}