#include <string>
#include <vector>
#include <cctype>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.size()==4 || s.size() ==6){
        for(int i =0;i<s.size();i++){
            if (!isdigit(s[i])){answer = false;} 
        }     
    }
    else return false;
    return answer;
}