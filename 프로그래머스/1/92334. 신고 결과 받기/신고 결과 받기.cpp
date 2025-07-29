#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    string key,value;
    unordered_map<string,int> UserId;
    unordered_map<string,int> Result;
    unordered_map<string,unordered_set<string>> ReportUserId;
    for(string& id : id_list)
    {
        UserId[id] = 0;
        Result[id] = 0;
    }
    for(string& Report : report)
    {
        stringstream ss(Report);
        ss >> key >> value;
        ReportUserId[key].insert(value);
    }
    
    for(auto& report : ReportUserId)
    {
        for(const string& r : report.second)
        {
            UserId[r]++;
        }
    }
    
    for(auto& iter : UserId)
    {
        if(iter.second>=k)
        {
            for(auto& re : ReportUserId )
            {
                if(re.second.find(iter.first) != re.second.end())
                {
                    Result[re.first]++;
                }
            }
        }
    }
    for(string& id : id_list)
    {
        answer.push_back(Result[id]);
    }
    return answer;
}