#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    int n = numbers.size();
    vector<int> answer(n,-1);
    vector<int> st;
    st.reserve(n);
    for (int i = n - 1; i >= 0; --i) {
        while (!st.empty() && numbers[st.back()] <= numbers[i]) {
            st.pop_back();
        }
        if (!st.empty()) {
            answer[i] = numbers[st.back()];
        }
        st.push_back(i);
    }
    return answer;
}