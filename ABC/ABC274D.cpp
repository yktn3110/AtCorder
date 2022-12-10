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
