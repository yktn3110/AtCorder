#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    int n, m;
    cin >> n >> m;

    vector<ll> a(n, 0);

    rep(i, n) cin >> a[i];

    ll t = 0;
    ll s = 0;
    rep(i, m) t += a[i], s += (i + 1) * a[i];

    ll ans = s;
    rep(i, n - m) {
        ll dt = t + a[i + m] - a[i];
        ll ds = s + m * a[i + m] - t;
        s = ds;
        t = dt;
        ans = max(s, ans);
    }

    cout << ans << endl;
    return 0;
}
