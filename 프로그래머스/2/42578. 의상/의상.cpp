#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string,int> wardrobe;
    for(vector<string> cl : clothes)
    {
        string category = cl[1];
        wardrobe[category]++;
    }
    
    for(const auto& pair : wardrobe)
    {
        answer *= (pair.second +1);
    }
    
    return answer - 1;
}