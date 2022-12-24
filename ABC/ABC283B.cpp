#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    cin.tie(0)->sync_with_stdio(0);

    int n, q;
    cin >> n;

    int a[n + 1];
    rep2(i, n) cin >> a[i];

    cin >> q;
    rep2(i, q) {
        int num, k, x;
        cin >> num;
        if (num == 1) cin >> k >> x, a[k] = x;
        else cin >> k, cout << a[k] << "\n";
    }
    cout << endl;
    return 0;
}
