#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

map<ll, ll> prime_factorize(ll N) {
    map<ll, ll> res;
    for (ll a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        ll ex = 0;  // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res[a] = ex;
    }

    // 最後に残った数について
    if (N != 1) res[N] = 1;
    return res;
}

int main(void) {
    ll k;
    cin >> k;
    const auto &res = prime_factorize(k);
    vector<ll> ans;
    rep3(x, res) {
        ll cnt = 0;
        ans.push_back(0);

        for (ll i = 1; i <= x.second; i++) {
            *ans.rbegin() += x.first;
            ll temp = *ans.rbegin();
            while (temp % x.first == 0) cnt++, temp /= x.first;
            if (cnt >= x.second) break;
        }
    }

    ll mx = 0;
    rep3(x, ans) mx = max(x, mx);
    cout << mx << endl;
}
