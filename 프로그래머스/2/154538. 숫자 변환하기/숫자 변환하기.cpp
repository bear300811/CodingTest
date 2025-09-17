#include <bits/stdc++.h>

using namespace std;


int solution(int x, int y, int n) {
    if (x == y) return 0;

    vector<int> dist(y + 1, -1);
    queue<int> q;
    dist[x] = 0;
    q.push(x);

    while (!q.empty()) 
    {
        int cur = q.front(); q.pop();

        int nxts[3] = {cur + n, cur * 2, cur * 3};
        for (int nxt : nxts) 
        {
            if (nxt > y) {continue;}
            if (dist[nxt] != -1) {continue;}
            dist[nxt] = dist[cur] + 1;
            if (nxt == y) 
            {
                return dist[nxt];
            }
            q.push(nxt);
        }
    }
    return -1;
}