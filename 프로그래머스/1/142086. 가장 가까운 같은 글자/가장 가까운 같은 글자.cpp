#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<char> ch;
    for(int i =0;i<s.size();i++){
        auto rit = find(ch.rbegin(),ch.rend(),s[i]);
        if(rit == ch.rend()){
            answer.push_back(-1);
        }
        else{
            int index =rit.base() - ch.begin()-1;
            int dist = i-index;
            answer.push_back(dist);
        }
        ch.push_back(s[i]);
    }
    return answer;
}