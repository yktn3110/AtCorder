#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;
using P = pair<int, int>;

vector<int> color(200010, -1); /* black = 1, white =0 */
vector<vector<int>> G(200010, vector<int>());
ll black_to;
ll white_to;

bool dfs_is_bipartite(int v, int col) {
    color[v] = col;
    if (col == 1) black_to++;
    else white_to++;
    rep3(next, G[v]) {
        if (color[next] != -1) {
            if (color[next] == col) return false;
            continue;
        }
        if (!dfs_is_bipartite(next, !col)) return false;
    }
    return true;
}

int main(void) {
    ll n;
    int m;
    cin >> n >> m;

    /* color.assign(n, -1); */

    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    ll ans = n * (n - 1) / 2 - m;

    rep(i, n) {
        if (color[i] != -1) continue;
        black_to = 0;
        white_to = 0;
        if (!dfs_is_bipartite(i, 1)) {
            cout << 0 << endl;
            return 0;
        }
        ans -= black_to * (black_to - 1) / 2;
        ans -= white_to * (white_to - 1) / 2;
    }

    cout << ans << endl;

    return 0;
}
