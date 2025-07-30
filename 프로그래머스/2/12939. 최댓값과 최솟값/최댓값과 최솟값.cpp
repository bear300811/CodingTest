#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<string> v;
    vector<int> i;
    stringstream ss(s);
    string str;
    while(ss>>str)
    {
        v.push_back(str);
    }
    for(string& st : v)
    {
        int num = stoi(st);
        i.push_back(num);
    } 
    
    sort(i.begin(),i.end());
    v.clear();
    for(int num1 : i)
    {
        v.push_back(to_string(num1));
    }
    string ans = v[0] + " " + v.back();
    answer = ans;
    
    return answer;
}