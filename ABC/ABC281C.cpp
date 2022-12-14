#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;
using P = pair<int, int>;

int main(void) {
    ll n, t;
    cin >> n >> t;
    vector<ll> a(n), sum(n);
    rep(i, n) {
        cin >> a[i];
        if (i == 0) sum[i] = a[i];
        else sum[i] = sum[i - 1] + a[i];
    }

    t = t % sum[n - 1];

    for (ll i = 0; i < sum.size(); i++) {
        if (sum[i] < t) continue;
        if (i == 0) cout << 1 << " " << t << endl;
        else cout << i + 1 << " " << t - sum[i - 1] << endl;
        return 0;
    }

    return 0;
}
