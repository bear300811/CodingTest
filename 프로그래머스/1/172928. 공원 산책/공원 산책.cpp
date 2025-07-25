#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int HorizonMove = 0;
    int VerticalMove = 0;
    bool FindStart = false;
    for(int j = 0;j<park.size();j++)
    {
        for(int i =0;i<park[j].size();i++)
        {
            if(park[j][i]=='S')
            {
                HorizonMove += i;
                VerticalMove +=j;
                FindStart = true;
                break;
            }
        }
        if(FindStart){break;}
    }
    for(int i =0;i<routes.size();i++)
    {
        bool NoneX = true;
        if(routes[i][0] == 'E')
        {
            int EastMove = stoi(string(1, routes[i][2]));
            if( park[VerticalMove].size()  > HorizonMove +EastMove)
            {
                for(int k = HorizonMove+1;k<=HorizonMove +EastMove;k++)
                {
                    if(park[VerticalMove][k]=='X')
                    {
                        NoneX =false;
                        break;
                    }
                }
                if(NoneX)
                {
                    HorizonMove += EastMove;
                }
            }
            else{continue;}
        }
        if(routes[i][0] == 'W')
        {
            int WestMove = -stoi(string(1, routes[i][2]));
            if(0 <= HorizonMove +WestMove)
            {
                for(int k = HorizonMove-1;k>=HorizonMove +WestMove;k--)
                {
                    if(park[VerticalMove][k]=='X')
                    {
                        NoneX =false;
                        break;
                    }
                }
                if(NoneX)
                {
                    HorizonMove += WestMove;
                }
            }
            else{continue;}
        }
        if(routes[i][0] == 'S')
        {
            int SouthMove = stoi(string(1, routes[i][2]));
            if( park.size()  > VerticalMove +SouthMove)
            {
                for(int k = VerticalMove+1;k<=VerticalMove +SouthMove;k++)
                {
                    if(park[k][HorizonMove]=='X')
                    {
                        NoneX =false;
                        break;
                    }
                }
                if(NoneX)
                {
                    VerticalMove += SouthMove;
                }
            }
            else{continue;}
        }
        if(routes[i][0] == 'N')
        {
            int NorthMove = -stoi(string(1, routes[i][2]));
            if(0 <= VerticalMove +NorthMove)
            {
                for(int k = VerticalMove-1;k>=VerticalMove +NorthMove;k--)
                {
                    if(park[k][HorizonMove]=='X')
                    {
                        NoneX =false;
                        break;
                    }
                }
                if(NoneX)
                {
                    VerticalMove += NorthMove;
                }
            }
            else{continue;}
        }
    }
    answer.push_back(VerticalMove);
    answer.push_back(HorizonMove);
    return answer;
}