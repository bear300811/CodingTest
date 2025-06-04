#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a<b){
        for(int i =a;i<=b;i++){
            answer += i;
        }
    }
    else if (a>b){
        for(int j =b;j<=a;j++){
            answer += j;
        }
    }
    else if(a==b){
        answer = a;
    }
    return answer;
}