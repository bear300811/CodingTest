#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int month[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    string week[7] = {"FRI","SAT","SUN","MON","TUE","WED","THU"};
    int totaldays = 0;
    for(int i =0;i<a-1;i++)
    {
        totaldays += month[i];
    }
    totaldays += b-1;
    answer = week[totaldays%7];
    return answer;
}