#include <string>
#include <vector>
#include <map> 

using namespace std;

int solution(string s) {
    int answer = 0;
    map<string, string> mymap ={
        {"zero","0"}, {"one","1"}, {"two","2"}, {"three","3"}, {"four","4"},
        {"five","5"}, {"six","6"}, {"seven","7"}, {"eight","8"}, {"nine","9"}
    };
    
    
    for(auto it : mymap){
        int pos=0;
        while((pos=s.find(it.first,pos)) != string :: npos){
            s.replace(pos,it.first.length(),it.second);
        }
    }
    answer = stoi(s);
    return answer;
}