#include <string>
#include <vector>

using namespace std;

pair<int,int> QuadTree(int r,int n,int size,const vector<vector<int>>& arr){
    bool bIsSame = true;
    int first = arr[r][n];
    for(int i = r;i<r+size;++i)
    {
        for(int j = n;j<n+size;++j)
        {
            if(arr[i][j] != first)
            {
                bIsSame = false;
                break;
            }
        }
        if(!bIsSame)
        {
            break;
        }
    }
    
    if(bIsSame)
    {
        if(first == 0)
        {
            return {1,0};
        }
        else
        {
            return {0,1};
        }
    }
    int half = size / 2;
    auto topLeft = QuadTree(r, n, half, arr);
    auto topRight = QuadTree(r, n+half, half, arr);
    auto bottomLeft = QuadTree(r+half, n, half, arr);
    auto bottomRight = QuadTree(r+half, n+half, half, arr);

    return 
    {
        topLeft.first + topRight.first + bottomLeft.first + bottomRight.first,
        topLeft.second + topRight.second + bottomLeft.second + bottomRight.second
    };
    
}

vector<int> solution(vector<vector<int>> arr) {
    auto answer = QuadTree(0,0,arr.size(),arr);
    return {answer.first,answer.second};
}