#include <string>
#include <cmath>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer;
    for(int i =1;i<=n;i++){
        if(n == pow(i,2)){
            answer = pow(i+1,2);
            break;
        }   
        else if (n != pow(i,2) && i == n )   answer =-1;
    }
    
    return answer;
}