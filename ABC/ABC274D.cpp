#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

bool f(int x, vector<int> a) {
    unordered_set<int> s;
    s.insert(0);
    rep3(i, a) {
        unordered_set<int> p;
        swap(p, s);
        rep3(nx, p) {
            s.insert(nx + i);
            s.insert(nx - i);
        }
    }
    return s.count(x);
}

int main(void) {
    int n, x, y;

    cin >> n >> x >> y;

    vector<int> a(n);
    rep(i, n) cin >> a[i];
    x -= a[0];

    vector<int> xa, ya;
    rep2(i, n - 1) {
        if (i % 2) ya.push_back(a[i]);
        else xa.push_back(a[i]);
    }
    if (f(x, xa) && f(y, ya)) cout << "Yes" << endl;
    else cout << "No" << endl;
}

/*
int main(void) {
    int n, x, y;
    int sumx = 0, sumy = 0;

    cin >> n >> x >> y;

    vector<int> a(n);
    rep(i, n) {
        cin >> a[i];
        if (i % 2) sumy += a[i];
        else sumx += a[i];
    }

    for (ll bit = 0; bit < ((ll)1 << n); bit++) {
        int temp1 = sumx;
        int temp2 = sumy;
        rep(i, n) {
            if (i == 0) continue;
            if (bit & (1 << i)) {
                if (i % 2) temp2 -= 2 * a[i];
                else temp1 -= 2 * a[i];
            }
        }
        if ((x == temp1) && (y == temp2)) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}
 */
