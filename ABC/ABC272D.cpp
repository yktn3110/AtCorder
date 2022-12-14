#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;
using P = pair<int, int>;

int main(void) {
    int n, m;
    set<P> lim;
    vector<P> l;
    map<P, set<P>> G;

    cin >> n >> m;

    rep2(i, n) rep2(j, n) lim.insert(P(i, j));

    for (int i = -n; i < n; i++)
        for (int j = -n; j < n; j++)
            if (j * j == m - i * i) l.push_back(P(i, j));

    queue<P> que;
    vector dist(n + 1, vector<int>(n + 1, -1));
    dist[1][1] = 0;
    que.push(P(1, 1));

    while (!que.empty()) {
        P now = que.front();
        que.pop();
        for (auto [di, dj] : l) {
            int ni = now.first + di, nj = now.second + dj;
            if (!lim.count(P(ni, nj))) continue;
            if (dist[ni][nj] != -1) continue;
            dist[ni][nj] = dist[now.first][now.second] + 1;
            que.push(P(ni, nj));
        }
    }

    rep2(i, n) {
        rep2(j, n) { cout << dist[i][j] << " "; }
        cout << "\n";
    }
    return 0;
}
