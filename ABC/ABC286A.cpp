#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    int a[n + 1], pq[q - p + 1], rs[s - r + 1];
    rep2(i, n) {
        cin >> a[i];
        if (p <= i and i <= q) pq[i - p] = a[i];
        else if (r <= i and i <= s) rs[i - r] = a[i];
    }
    rep2(i, n) {
        if (p <= i and i <= q) cout << rs[i - p] << " ";
        else if (r <= i and i <= s) cout << pq[i - r] << " ";
        else cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
