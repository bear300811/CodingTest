#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while(n>=a)
    {
        int ex = (n/a)*b;
        answer +=ex;
        n= ex+(n%a);
    }
    return answer;
}