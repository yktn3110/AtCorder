#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

map<int, vector<int>> G;
vector<bool> flag;

void dfs(int a) {
    flag[a] = true;

    rep3(v, G[a]) {
        if (flag[v]) continue;
        dfs(v);
    }
    return;
}

int main(void) {
    int n, m;
    cin >> n >> m;

    if (m == 0) {
        cout << n << endl;
        return 0;
    }

    flag.assign(n, false);

    rep(i, m) {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    int cnt = 0;

    rep3(x, G) {
        if (flag[x.first]) continue;
        cnt++;
        dfs(x.first);
    }

    cnt += n - G.size();

    cout << cnt << endl;
    return 0;
}
