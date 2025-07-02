#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    vector<int> nums = win_nums;
    int BestSame = 0;
    int WorstSame = 0;
   
    for(int i=0;i<lottos.size();i++)
    {
        for(int j=0;j<win_nums.size();j++)
        {
            if(lottos[i]==win_nums[j])
            {
                BestSame++;
    
                continue;
            }
            else if(lottos[i]==0)
            {
                BestSame++;
                break;
            }
        }
        for(int k=0;k<nums.size();k++)
        {
            if(lottos[i]==nums[k])
            {
                WorstSame++;
               
                continue;
            }
            else if(lottos[i]==0)
            {
               ;
            }
        }
    }
    switch(BestSame)
    {
        case 6:
            answer.push_back(1);
            break;
        case 5:
            answer.push_back(2);
            break;
        case 4:
            answer.push_back(3);
            break;
        case 3:
            answer.push_back(4);
            break;
        case 2:
            answer.push_back(5);
            break;
        default:
            answer.push_back(6);
            break;
    }
     switch(WorstSame)
    {
        case 6:
            answer.push_back(1);
            break;
        case 5:
            answer.push_back(2);
            break;
        case 4:
            answer.push_back(3);
            break;
        case 3:
            answer.push_back(4);
            break;
        case 2:
            answer.push_back(5);
            break;
        default:
            answer.push_back(6);
            break;
    }
    return answer;
}