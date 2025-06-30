#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int range = 0 ;
    for(int i = 0; i < section.size();i++)
    {
        if(section[i] + m-1>=section[i] && range<section[i])
        {
            answer++;
            range = section[i] + m-1;
        }
    }
    return answer;
}