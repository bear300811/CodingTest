#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int index = 0 ;
    for(auto it : goal)
    {
        if(cards1[index] == it)
        {
            cards1.erase(cards1.begin());
            continue;
        }
        else if(cards2[index] == it)
        {
            cards2.erase(cards2.begin());
            continue;
        }
        else{return "No";}

    }
    return answer;
}