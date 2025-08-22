#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s) {
    int n = s.size();
    if (n % 2) return 0;
    int answer = 0;
    
    string rotate = s + s;
    for(int i = 0;i<n;++i)
    {
        stack<char> st;
        bool ok = true;
        for(int k = i;k<i+n && ok;++k)
        {
            char c = rotate[k];
            if (c == '(' || c == '[' || c == '{') 
            {
                st.push(c);
            }
            else
            {
                if(st.empty() ||
                    !((c == ')' && st.top() == '(') ||
                      (c == ']' && st.top() == '[') ||
                      (c == '}' && st.top() == '{')) ) 
                {
                    ok = false;
                } 
                else 
                {
                    st.pop();
                }
            }
        }
        if (ok && st.empty()) 
        {
            ++answer;
        }
    }
   
    return answer;
}