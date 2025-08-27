#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    for(long long i = left;i<=right;++i)
    {
        long long l = i/n;
        long long r = i%n;
        answer.push_back((r > l ? r:l)+1);
    }
   
    
    return answer;
}