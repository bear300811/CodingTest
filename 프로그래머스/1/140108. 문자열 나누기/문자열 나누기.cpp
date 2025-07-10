#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char first = s[0];
    int same = 0;
    int nsame =0;
    for(int i = 0;i<s.size();i++)
    {
        if(first ==s[i] )
        {
            same++;
        }
        else { nsame++;}
        if(same == nsame && nsame>0)
        {
            answer++;
            first = s[i+1];
        }
    }
    if(same != nsame){answer++;}
    return answer;
}