#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    int sum_size = 2;
    int index = 0;
    int n = elements.size();
    unordered_set<long long> numbers(elements.begin(),elements.end());
    while(true)
    {
        long long cur = 0;
        for(int i = 0; i<sum_size;++i)
        {
            cur += elements[(index + i) % n];
        }
        numbers.insert(cur);
        int moved = 1;
        while(moved < n)
        {
            cur -= elements[index % n];
            cur += elements[(index+sum_size)%n];
            
            index = (index + 1) % n;
            
            numbers.insert(cur);
            
            ++moved;
        }
        sum_size++;
        if(sum_size > n){ break; }
    }
    answer = numbers.size();
    return answer;
}