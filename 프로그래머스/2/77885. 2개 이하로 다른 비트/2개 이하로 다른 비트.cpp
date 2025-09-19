#include <string>
#include <vector>

using namespace std;


vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;

    for(long long& it : numbers)
    {
       long long num = it;
        if(num % 2 == 0)
        {
            answer.push_back(num+1);
        }
        else
        {
            long long t = 0, tmp = it;
            while(tmp % 2LL == 1LL)
            {
                tmp /= 2LL;
                ++t;
            }
            long long add = (1LL<< (t - 1));
            
            answer.push_back(it+add);
        }
    }
    return answer;
}