#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

vector<int> dist;
set<ll> ans;

void func(ll x, auto itr) {
    ll x1, x2;

    if (x == 0) ans.insert(0);
    if (itr != dist.end()) {
        x1 = x + (ll)(1ll << (*itr - 1));
        x2 = x;

        itr++;

        ans.insert(x1);
        ans.insert(x2);
        func(x1, itr);
        func(x2, itr);
    }

    return;
}

int main(void) {
    ll n;

    cin >> n;

    rep(i, 61) {
        ll shift = 1 << i;
        if (shift > n) break;
        if (n & (ll)(1ll << i)) dist.push_back(i + 1);
    }
    auto itr = dist.begin();

    func(0, itr);
    rep3(x, ans) cout << x << "\n";

    return 0;
}
