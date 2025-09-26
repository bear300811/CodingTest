#include <string>
#include <vector>
#include <cmath>
#include <unordered_set>

using namespace std;

bool deci(int numbers){
    if(numbers<2)
    {
        return false;
    }
    for(int i = 2;i<=sqrt(numbers);++i)
    {
        if(numbers%i==0)
        {
            return false;
        }
    }
    return true;
}
void dfs(int cnt[10], string& cur, unordered_set<string>& out) {

    if (!cur.empty())
    {
        out.insert(cur);
    }

    for (int d = 0; d <= 9; ++d) {
        if (cnt[d] == 0) 
        {
            continue;
        }
        cnt[d]--;
        cur.push_back(char('0' + d));
        dfs(cnt, cur, out);
        cur.pop_back();
        cnt[d]++;
    }
}
int solution(string numbers) {
    int answer = 0;
    int cnt[10] = {0};
    for(char c : numbers)
    {
        cnt[c - '0']++;
    }
    string cur;
    unordered_set<string> all;
    dfs(cnt, cur, all);
    
    unordered_set<int> allNum;   
    for (auto& s : all) 
    {
        allNum.insert(stoi(s));
    }
    for(auto& it : allNum)
    {
        if(deci(it))
        {
            answer++;
        }
    }
    
    return answer;
}