#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = s;
    for(int i =0;i<s.size();i++){
        char c =s[i];
        if(s[i]== ' '){continue;}
        
        else if(c>='A' && c<='Z'){ answer[i] = (c - 'A' + n) %26+'A';}
        else if(c>='a' && c<='z'){ answer[i] = (c - 'a' + n) %26+'a';}
    }
    return answer;
}