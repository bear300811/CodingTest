#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    unordered_map<string, int> play;
    int PlayerIndex = 0;
    for(string& p : players)
    {
        play[p] = PlayerIndex;
        PlayerIndex++;
    }
    for(string& call : callings )
    {
       int index = play[call];
       int idx = index-1;
        
        swap(players[index],players[idx]);
        
        play[players[index]] = index;
        play[players[idx]] = idx;
    }
    for(string& player : players)
    {
        answer.push_back(player);
    }
    return answer;
}