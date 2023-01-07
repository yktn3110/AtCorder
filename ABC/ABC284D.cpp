#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    const ll loop = (ll)3 * 1000000000;
    int t;

    cin >> t;
    rep(x, t) {
        ll n;
        cin >> n;

        ll p, q;
        for (ll i = 2; i < loop && i * i < n; i++) {
            if (n % i != 0) continue;

            if (n % (i * i) == 0) p = i, q = n / (i * i);
            else q = i, p = sqrtl(n / i);
            break;
        }

        cout << p << " " << q << "\n";
    }
    cout << endl;

    return 0;
}
