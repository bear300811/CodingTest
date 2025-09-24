#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool com(const string& a,const string& b){
    return a+b > b+a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> num;
    for(int& it : numbers)
    {
        num.push_back(to_string(it));
    }
    sort(num.begin(),num.end(), com);
    
    if (!num.empty() && num[0] == "0")
    {
        return "0";
    }
    answer.reserve(numbers.size() * 4);
    for(string& n : num)
    {
        answer += n;
    }
    return answer;
}