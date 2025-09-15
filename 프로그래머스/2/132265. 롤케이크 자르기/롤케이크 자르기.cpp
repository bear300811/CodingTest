#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> topping) {
    int n = topping.size();
    if(n<2) 
    {
        return 0;
    }
    
    int answer = 0;
    unordered_map<int,int> rightcount;
    unordered_map<int,int> leftcount;
    
    for(int& num : topping)
    {
        rightcount[num]++;
    }
    int rightType = rightcount.size();
    int leftType = 0;
    
    for(int i = 0;i < n-1;++i)
    {
        int x = topping[i];
       
        auto itL = leftcount.find(x);
        if (itL == leftcount.end()) 
        {
            leftcount[x] = 1;
            ++leftType;
        } 
        else 
        {
            ++(itL->second);
        }

      
        auto itR = rightcount.find(x);
        if (itR != rightcount.end()) 
        {
            --(itR->second);
            if (itR->second == 0) 
            {
                rightcount.erase(itR);
                --rightType;
            }
        }

        if (leftType == rightType) ++answer;
    }
    
    return answer;
}