#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    unordered_map <string,int>Want_things;
    unordered_map <string,int>Want_count;
    for(int i = 0;i<want.size();++i)
    {
        Want_things[want[i]] = number[i];
    }
    
    for(int k = 0;k+10<=discount.size();++k)
    {
        int matched = 0;
        Want_count.clear();
        for(int j = k;j<k+10;++j)
        {
            Want_count[discount[j]]++;
           if (Want_things.count(discount[j]))
            {
                if(Want_count[discount[j]]==Want_things[discount[j]])
                {
                    matched++;
                }
            }
        } 
        if(matched == Want_things.size())
        {
            answer++;
        }
    }
    
    return answer;
}