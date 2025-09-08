#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool Prime(long long x){
    if(x<2) {return false;}
    if(x ==2 || x ==3) {return true;}
    if(x % 2 == 0 || x % 3 == 0){return false;}
    for(long long i = 5; i * i <= x; i += 6)
    {
        if(x%i==0||x%(i+2) == 0) { return false;}
    }
    return true;
}

string base(long long n, int k){
    string s;
    while (n > 0) {
        s.push_back(char('0' + (n % k))); 
        n /= k;
    }
    reverse(s.begin(), s.end());
    return s;
}


int solution(int n, int k) {
    int answer = 0;
    string s =base(n,k);
   
    string token;
    for (char c : s) 
    {
        if (c == '0')
        {
            if (!token.empty()) 
            {
                long long num = stoll(token);  
                if (Prime(num)) {++answer;}
                token.clear();
            }
        } 
        else 
        {
            token.push_back(c);
        }
    }
    if (!token.empty()) 
    { 
        long long num = stoll(token);
        if (Prime(num)) {++answer;}
    }
    return answer;
}