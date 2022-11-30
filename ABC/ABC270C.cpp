#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()

bool done = false;
vector<bool> flag(300000);
vector<int> path;
vector<int> G[300000];
long long cnt = 0;
void dfs_find_to(int from, int to) {
    if (!done) path.push_back(from);
    flag[from] = true;
    if (from == to) done = true;

    for (int i = 0; i < G[from].size(); i++) {
        if (flag[G[from][i]]) continue;
        cnt++;

        dfs_find_to(G[from][i], to);
    }

    if (!done) path.pop_back();
    return;
}

int main(void) {
    int n, x, y;
    cin >> n >> x >> y;

    rep(i, n - 1) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    rep2(i, n) flag[i] = false;

    vector<int> dist;
    dfs_find_to(x, y);

    cout << "debug " << cnt << "\n";
    rep3(x, path) cout << x << endl;
    return 0;
}
