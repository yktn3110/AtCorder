#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    int n, k, d;
    cin >> n >> k >> d;

    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    vector dp(n + 2, vector(k + 2, vector<ll>(d, -1)));
    dp[0][0][0] = 0;

    rep(i, n) {
        int ni = i + 1;
        rep(j, k + 1) rep(r, d) {
            ll now = dp[i][j][r];
            if (now == -1) continue;

            /* use */
            {
                int nj = j + 1, nr = (r + a[i]) % d;
                dp[ni][nj][nr] = max(dp[ni][nj][nr], now + a[i]);
            }
            /* not use */
            {
                int nj = j, nr = r;
                dp[ni][nj][nr] = max(dp[ni][nj][nr], now);
            }
        }
    }

    cout << dp[n][k][0] << endl;
}

/*
int main(void) {
    int n, k, d;
    ll mx = 0;
    cin >> n >> k >> d;

    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> A, B;
    vector<ll> Ac, Bc;

    for (ll bit = 0; bit < (ll)1 << (n / 2); bit++) {
        int cnt = 0;
        ll sum = 0;
        for (ll i = 0; i < n / 2; i++) {
            if (bit & ((ll)1 << i)) {
                sum += a[i];
                cnt++;
            }
        }
        if (cnt > k) continue;
        A.push_back(sum);
        Ac.push_back(cnt);
    }

    for (ll bit = 0; bit < (ll)1 << (n / 2); bit++) {
        int cnt = 0;
        ll sum = 0;
        for (ll i = 0; i < n / 2; i++) {
            if (bit & ((ll)1 << i)) {
                sum += a[i + n / 2];
                cnt++;
            }
        }
        if (cnt > k) continue;
        B.push_back(sum);
        Bc.push_back(cnt);
    }

    for (ll i = 0; i < A.size(); i++) {
        for (ll j = 0; j < B.size(); j++) {
            if (Ac[i] + Bc[j] != k) continue;
            if ((A[i] + B[j]) % d == 0) mx = max(mx, A[i] + B[j]);
        }
    }

    cout << (mx == 0 ? -1 : mx) << endl;
    return 0;
}
 */
