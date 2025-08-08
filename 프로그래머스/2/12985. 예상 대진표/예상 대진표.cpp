#include <iostream>
#include <cmath>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    int Round =1;
    while(true)
    {
        if((a+1)/2 == (b+1)/2)
        {
            answer = Round;
            break;
        }
        a = (a+1)/2;
        b = (b+1)/2;
        Round++;
    }
    

    return answer;
}