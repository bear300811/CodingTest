#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int size = t.size();
    int sizeP= p.size();
  
    for(int i=0;i<=size-sizeP;i++){
        string num1 = t.substr(i,sizeP);
        if(num1<=p) { 
            answer++;
        }
    }
    return answer;
}