#include <string>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map<int,int> score = { {1,3},{2,2},{3,1},{4,0},{5,1},{6,2},{7,3} };
    unordered_map<char,int> typescore = {
        {'R',0},
        {'T',0},
        {'C',0},
        {'F',0},
        {'J',0},
        {'M',0},
        {'A',0},
        {'N',0}
    };
    for(int i =0;i<survey.size();i++)
    {
        auto it = score.find(choices[i]);
        if(choices[i]<4)
        {
            typescore[survey[i][0]] += it->second;
        }
        else if(choices[i]>4)
        {
            typescore[survey[i][1]] += it->second;
        }       
    }
    if(typescore['R']>typescore['T']){answer += 'R';}
    else if(typescore['R']<typescore['T']){answer += 'T';}
    else {answer += 'R'; }
    
    if(typescore['C']>typescore['F']){answer += 'C';}
    else if(typescore['C']<typescore['F']) {answer += 'F';}
    else{answer += 'C'; }
    
    if(typescore['J']>typescore['M']){answer += 'J';}
    else if(typescore['J']<typescore['M']) {answer += 'M';}
    else{answer += 'J'; }
   
    if(typescore['A']>typescore['N']){answer += 'A';}
    else if(typescore['A']<typescore['N']) {answer += 'N';}
    else{answer += 'A'; }
    return answer;
}