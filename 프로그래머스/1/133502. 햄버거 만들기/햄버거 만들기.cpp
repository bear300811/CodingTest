#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    int result = 0;
    vector<int> value;
    for(int i = 0; i < ingredient.size();i++)
    {
        value.push_back(ingredient[i]);
        if(value.size()>=4 &&
             value[value.size()-4]==1 &&
             value[value.size()-3]==2 &&
             value[value.size()-2]==3 &&
             value[value.size()-1]==1)
        {
            value.pop_back(); 
            value.pop_back();
            value.pop_back();
            value.pop_back();
            answer++;
        }
    }
   
    return answer;
}