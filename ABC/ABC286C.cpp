#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;
const long long INF = 1LL << 60;

int main(void) {
    int n;
    ll a, b;
    string s, t;
    cin >> n >> a >> b;
    cin >> s;

    t = s;
    reverse(ALL(t));

    ll min_cost = INF;
    string sx_old = s, tx_old = t;

    rep(cnt, n) {
        ll cost = 0;
        string sx = sx_old, tx = tx_old;

        if (cnt != 0) {
            sx = sx_old + sx[0];
            tx = sx[0] + tx_old;
            sx.erase(0, 1);
            tx.erase(n, 1);
            sx_old = sx;
            tx_old = tx;
            cost += a * cnt;
        }
        for (int i = 0; i < n / 2; ++i) {
            if (sx[i] != tx[i]) cost += b;
        }
        min_cost = min(min_cost, cost);
    }

    cout << min_cost << endl;

    return 0;
}
