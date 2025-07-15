#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

string solution(string s, string skip, int index) {
    string answer = s;
    unordered_set<char> sk(skip.begin(), skip.end());
    int result = 0;
    for(char ch : s)
    {
         int count = 0;
         while(count<index)
         {
             ch++;
             if(ch>'z'){ ch = 'a';}
             
             if(sk.find(ch)==sk.end())
             {
                 count++;
             }
         }
        answer[result] = ch;
        result++;
    }
    return answer;
}