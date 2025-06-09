#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a,int b){ return a>b;}

string solution(string s) {
    string answer = "";
    sort(s.begin(),s.end(),compare);
    answer = s;
    return answer;
}