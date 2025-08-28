#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> count = {0,0,0};
    vector<int> one = {1,2,3,4,5};
    vector<int> two = {2,1,2,3,2,4,2,5};
    vector<int> three = {3,3,1,1,2,2,4,4,5,5};
    for(int i = 0;i<answers.size();++i)
    {
        if(one[i%5]==answers[i])
        {
            count[0]++;
        }
        if(two[i%8]==answers[i])
        {
            count[1]++;
        }
        if(three[i%10]==answers[i])
        {
            count[2]++;
        }
    }
    int maxscore = 0;
    for(int it : count)
    {
       if(it > maxscore)
       {
           maxscore = it;
       }
    }
    for(int i = 0;i<count.size();++i)
    {
        if(maxscore == count[i])
        {
            answer.push_back(i+1);
        }
    }
    return answer;
}