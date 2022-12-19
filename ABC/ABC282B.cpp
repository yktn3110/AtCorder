#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

char c[10010][10010] = {'0'};

bool func(int a, int b, int len) {
    rep(i, len) if ((c[a][i] == 'x') && (c[b][i]) == 'x') return false;

    return true;
}

int main(void) {
    int n, m, ans = 0;
    cin >> n >> m;

    rep(i, n) rep(j, m) cin >> c[i][j];

    rep(i, n) {
        if (i == n - 1) break;
        for (int j = i + 1; j < n; j++)
            if (func(i, j, m)) ans++;
    }
    cout << ans << endl;
    return 0;
}
