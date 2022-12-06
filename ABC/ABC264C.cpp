#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    bool c[10][10] = {false};
    int temp;
    string ans = "No";

    int h1, w1;
    cin >> h1 >> w1;
    vector<vector<int>> a(h1, vector<int>(w1));
    rep(i, h1) rep(j, w1) cin >> temp, a[i][j] = temp;

    int h2, w2;
    cin >> h2 >> w2;
    vector<vector<int>> b(h2, vector<int>(w2));
    rep(i, h2) rep(j, w2) cin >> temp, b[i][j] = temp;

    rep(i, 1 << h1) {
        rep(j, 1 << w1) {
            vector<int> is, js;
            rep(k, h1) if (i & 1 << k) is.push_back(k);
            rep(k, w1) if (j & 1 << k) js.push_back(k);

            if (is.size() != h2 || js.size() != w2) continue;

            vector c(h2, vector<int>(w2));
            rep(m, h2) rep(n, w2) c[m][n] = a[is[m]][js[n]];

            if (b == c) ans = "Yes";
        }
    }

    cout << ans << endl;
    return 0;
}
