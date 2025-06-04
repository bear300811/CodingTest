#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer=0;
    long long num1=num;
    if (num1 ==1 ) return 0;
    while(num1 != 1){
        num1 = (num1 % 2 == 0)  ? num1/2 : (num1*3)+1; 
        answer++;
    }
    if(answer >= 500)  return -1;
    return answer;
}