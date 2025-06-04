#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int num = x;
    int num1=0;
    while(x>0)
    {
        num1 += x%10;
        x /=10;
    }

    return (num % num1 == 0);
}