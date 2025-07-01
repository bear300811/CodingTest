#include <string>
#include <vector>
#include <cmath>

using namespace std;
int measure(int num){
    int answer = 0;
    vector<int> v;
    for(int i = 1; i <=sqrt(num);i++)
    {
        if(num%i==0)
        {
            v.push_back(i);
            if(i != num/i){v.push_back(i);}
        }
    }
    answer = v.size();
    return answer;
}


int solution(int number, int limit, int power) {
    int answer = 0;
    for(int i = 1;i<=number;i++)
    {
        if(measure(i)<=limit){answer += measure(i);}
        else if(measure(i)>limit){answer += power;}
    }
    return answer;
}