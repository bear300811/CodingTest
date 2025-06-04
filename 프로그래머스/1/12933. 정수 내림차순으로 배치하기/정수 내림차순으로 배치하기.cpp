#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer=0;
    vector<long long> desc;
    while(n>0){
    desc.push_back(n%10);
    n/=10;
    }
    for(int i =0;i<desc.size();i++){
        int tmp = i;
        for(int j= i+1;j<desc.size();j++){    
            if(desc[tmp]<=desc[j])      tmp =j;
        }
         swap(desc[i],desc[tmp]);   
    }
    for(int k=0;k<desc.size();k++){
        int num = desc[k];
        answer = answer * 10 +desc[k];
    }
    return answer;
}