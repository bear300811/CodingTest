#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool man(int a, int b )
{
    return a>b;    
}

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> num1;
    for(int i=0;i<score.size();i++)
    {
        num1.push_back(score[i]);
        sort(num1.begin(),num1.end(),man);
        if(num1.size()>=k)
        {
            answer.push_back(num1[k-1]);
        }
        else{answer.push_back(num1.back());}
    }
    return answer;
}