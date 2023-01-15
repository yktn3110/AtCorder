#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;
using Pss = pair<string, string>;

int main(void) {
    int n;
    map<string, string> G;
    map<string, bool> flag;
    string start;
    auto dfs = [&](auto dfs, string x) -> bool {
        flag[x] = true;
        if (G.count(x)) {
            if (G[x] == start) return false;
            else return dfs(dfs, G[x]);
        }
        return true;
    };

    cin >> n;

    rep(i, n) {
        string si, ti;
        cin >> si >> ti;
        G[si] = ti;
        flag[si] = false;
    }

    rep3(v, G) {
        start = v.first;
        if (flag[start]) continue;
        if (!dfs(dfs, v.first)) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
