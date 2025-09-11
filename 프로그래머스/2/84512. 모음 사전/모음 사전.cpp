#include <string>
#include <vector>

using namespace std;

vector<char> c = {'A', 'E', 'I', 'O', 'U'};
vector<string> CurrentWord;

void dfs(string cu,int count){
    if(!cu.empty())
    {
        CurrentWord.push_back(cu);
    }
    
    if(count>=5)
    {
        return;
    }
    for(int i = 0;i<c.size();++i)
    {
        dfs(cu+c[i],count+1);
    }
    
}

int solution(string word) {
    int answer = 0;
    dfs("",0);
    for(int i = 0;i<CurrentWord.size();++i)
    {
        if(CurrentWord[i] == word)
        {
            return i+1;
        }
    }
    return answer;
}