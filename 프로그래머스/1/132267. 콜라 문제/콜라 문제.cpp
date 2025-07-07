#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int c = 0;
    while(n>=a)
    {
        answer += (n/a)*b;
        c = n%a;
        n = (n/a)*b+c;
    }
    return answer;
}