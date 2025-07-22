#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    int todayY = stoi(today.substr(0,4));
    int todayM = stoi(today.substr(5,2));
    int todayD = stoi(today.substr(8,2));
    map<char, int> term;
    for (string& t : terms) 
    {
        char type = t[0];
        int month = stoi(t.substr(2)); 
        term[type] = month;
    }
    for(int i =0;i<privacies.size();i++)
    {
        char TermsType = privacies[i].back();
        int privacyY = stoi(privacies[i].substr(0,4));
        int privacyM = stoi(privacies[i].substr(5,2));
        int privacyD = stoi(privacies[i].substr(8,2));
        auto it = term.find(TermsType);
        if(it!=term.end())
        {
            int resultM = it->second+ privacyM;
            if(resultM>12)
            {
                privacyY +=  (resultM-1)/12;
                resultM = (resultM-1) % 12+1;
            }
            if(privacyY<todayY)
            {
                answer.push_back(i+1);
            }
            else if(privacyY==todayY)
            {
                if(resultM<todayM)
                {
                    answer.push_back(i+1);
                }
                else if(resultM==todayM)
                {
                    if(privacyD<=todayD)
                    {
                    answer.push_back(i+1);
                    }
                }
            }
            else{continue;}
        }
        
    }
    return answer;
}