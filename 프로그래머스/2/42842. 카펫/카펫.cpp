#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    for(int i =1;i<=yellow;++i)
    {
        for(int j = 1;j<=yellow;++j)
        {
            if(yellow==i*j)
            {
                if( ( (i+2)*2+j*2) ==brown && i>=j)
                {
                    answer.push_back(i+2);
                    answer.push_back(j+2);
                    break;
                }
            }
        }
        if(!answer.empty())
        {
            break;
        }
    }
    return answer;
}