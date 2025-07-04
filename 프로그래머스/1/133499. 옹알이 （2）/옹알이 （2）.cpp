#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> bab = {"aya","ye","woo","ma"};
    for(string& it : babbling)
    {
        string s = "";
        bool v = true;
        while(!it.empty()){
            bool matched = false;
            for(string& b : bab)
            {
                if(it.substr(0,b.size())==b && b!=s)
                {
                    it = it.substr(b.size());
                    s = b ;
                    matched = true;
                    break;
                }
            }
            if(!matched)
            { 
                v = false;
                break;
            }
        }
        if(v){answer++;}
    }
    return answer;
}