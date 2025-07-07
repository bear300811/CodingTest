#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool des(int a, int b){
    return a>b;
}

string solution(string X, string Y) {
    string answer = "";
for (int i = 0; i <= 9; i++) {
    int countX = count(X.begin(), X.end(), i + '0');
    int countY = count(Y.begin(), Y.end(), i + '0');
    int useCount = min(countX, countY);
    answer += string(useCount, i + '0');
}

    string em = "0";
    if(answer.empty()){return "-1";}
    sort(answer.begin(),answer.end(),des);
    if(answer[0]==em[0]){return em;}
    return answer;
}