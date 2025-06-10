#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int a = n;
    int b = m;
    int c;
    while(b!=0){
        c = a%b;
        a = b;
        b = c;
    }
    int num1 =(n*m)/a;
    answer.push_back(a);
    answer.push_back(num1);
    return answer;
}