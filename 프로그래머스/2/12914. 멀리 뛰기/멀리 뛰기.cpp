#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    long long next;
    long long prev1 = 1;
    long long prev2 = 2;
    
    if (n <= 2) return n;  
    for(long long i = 3;i<=n;++i)
    {
        next = (prev1 + prev2)%1234567;
        prev1 = prev2;
        prev2 = next;
    }
    answer = prev2;
    return answer;
}