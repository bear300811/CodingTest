#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> a;
    int num1 = n;
    while(num1!=0)
    {
        a.push_back(num1%3);
        num1 /= 3;
    }
    for(int i =0;i < a.size();i++){
        answer+=pow(3,a.size()-i-1)*a[i];
    }
    return answer;
}