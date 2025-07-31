#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

string solution(string s) {
    string tmp;
    string answer = "";
    stringstream ss(s);
    
    while(getline(ss,tmp,' '))
    {
        tmp[0] = toupper(tmp[0]);
        for(int i = 1;i<tmp.size();i++)
        {
            tmp[i] = tolower(tmp[i]);
        }
        answer += tmp;
        if(answer.size()<s.size())
        {
            answer += ' ';
        }
    }
    
    
    return answer;
}