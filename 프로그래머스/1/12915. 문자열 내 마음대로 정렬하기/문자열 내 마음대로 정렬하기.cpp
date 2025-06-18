#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    vector<char> ch;
    for(int i=0;i<strings.size();i++){
        ch.push_back(strings[i][n]);
    }
    sort(ch.begin(),ch.end());
    for(int k=0;k<ch.size();k++){
        for(int j=0;j<strings.size();j++){
            if(strings[j][n] == ch[k]){
                answer.push_back(strings[j]);
                strings.erase(strings.begin()+j);
                break;
            }
        }
    }
    for(int a=0;a<answer.size()-1;a++){
        for(int b=a+1;b<answer.size();b++){
            if(answer[a][n]==answer[b][n] && answer[a]>answer[b]){
                swap(answer[a],answer[b]);
            }
        }
    }
    return answer;
}