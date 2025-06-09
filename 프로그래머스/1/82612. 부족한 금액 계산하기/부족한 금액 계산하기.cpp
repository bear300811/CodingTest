using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long result=0;
    for(long long i =1;i<=count;i++){ result += price*i;}  
    answer = money >= result ? 0:result - money; 
    return answer;
}