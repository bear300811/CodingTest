#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int max1,max2 = 0;
    for(int i = 0;i<sizes.size();++i)
    {
        int w,h;
        if(sizes[i][0]>sizes[i][1])
        {
            w = sizes[i][0];
            h = sizes[i][1];
        }
        else
        {
            w = sizes[i][1];
            h = sizes[i][0];
        }
        if (w > max1) 
        {
            max1 = w;
        }
        
        if (h > max2) 
        {
            max2 = h;
        }
    }
    answer = max1*max2;
    return answer;
}