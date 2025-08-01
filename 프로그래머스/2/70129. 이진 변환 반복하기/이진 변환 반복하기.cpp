#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int ZeroCount = 0;
    int OneSize = 0;
    int count = 0;
    while(s!="1")
    {
        string One = "";
        for(char& c : s)
        {
            if(c=='0')
            {
                ZeroCount++;
            }
            else
            {
                One += c;
            }
        }
        OneSize = One.size();
        string result = "";
        
        while(OneSize!=0)
        {
            result += to_string(OneSize%2);
            OneSize /=2;
        }
        reverse(result.begin(),result.end());
        s = result;
        count++;
    }
    answer.push_back(count);
    answer.push_back(ZeroCount);
    return answer;
}