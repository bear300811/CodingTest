#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    for(int size=1;size<food.size();size++){
        for(int i =0;i<food[size]/2;i++){
            answer+=(to_string(size));  
        }
    }
    answer += to_string(0);
    for(int size=food.size()-1;size>0;size--){
        for(int i =0;i<food[size]/2;i++){
           answer += to_string(size);
        }
    }
    return answer;
}