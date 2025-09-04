#include <string>
#include <vector>
#include <algorithm>

using namespace std;

 int answer = 0;
 int sum = 0;
 int index = 0;

void dfs(int index,int sum,const vector<int> numbers,const int target){
   if(index==numbers.size())
    {
        if(sum==target)
        {
            answer++;
        }
       return;
    }
    
    dfs(index+1,sum+numbers[index],numbers,target);
    dfs(index+1,sum-numbers[index],numbers,target);  
}

int solution(vector<int> numbers, int target) {
    answer = 0;
    dfs(0,0,numbers,target);
    
    return answer;
}