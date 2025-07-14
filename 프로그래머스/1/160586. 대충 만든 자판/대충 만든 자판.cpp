#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    for(string& tar : targets)
    {
        int result = 0;
        for(char ch : tar)
        {
            vector<int> low;
            for(string& key : keymap)
            {
                auto it = find(key.begin(),key.end(),ch);
                if(it != key.end())
                {
                    int count = distance(key.begin(),it)+1;
                    low.push_back(count);
                }
            }
            if(low.empty())
            {
                result = -1;
                break;
            }
            else
            {
                sort(low.begin(),low.end());
                for(int i : low)
                {
                    if(i>=0)
                    {
                        result += i;
                        break;
                    }
                }
            }
        }
        answer.push_back(result);
        
    }
    return answer;
}