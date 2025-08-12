#include <string>
#include <vector>

using namespace std;

int gcd(int a,int b)
{
    int tmp = 0;
    while(b!=0)
    {
        int tmp = b;
        b = a%b;
        a = tmp;
    }
    return a;
}

int solution(vector<int> arr) {
    int answer = 0;
    int tmp =0;
    if(arr.size()>1)
    {
        tmp = gcd(arr[0],arr[1]);
        answer = arr[0]*arr[1]/tmp;
    }
    for(int i =2;i<arr.size();++i)
    {
        tmp = gcd(answer,arr[i]);
        answer = answer*arr[i]/tmp;
    }
    
    return answer;
}