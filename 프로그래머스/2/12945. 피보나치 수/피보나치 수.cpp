#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(int n) {
    int answer = 0;
    map<int,long long> number;
    number[0] = 0;
    number[1] = 1;
    for(int i =2;i<=n;i++)
    {
        number[i] = (number[i-1] + number[i-2])% 1234567;
    }
    answer = number[n] % 1234567;
    return answer;
}