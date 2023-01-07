#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

map<int, vector<int>> G;
vector<bool> flag;
int cnt = 0;

void dfs(int a) {
    if (cnt == 1000000) return;
    cnt++;
    flag[a] = true;

    rep3(v, G[a]) {
        if (flag[v]) continue;
        dfs(v);
    }
    flag[a] = false;

    return;
}

int main(void) {
    int n, m;
    cin >> n >> m;

    flag.assign(n + 1, false);

    rep(i, m) {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    dfs(1);

    cout << cnt << endl;
    return 0;
}
