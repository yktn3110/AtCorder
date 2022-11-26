#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()

struct UnionFind {
    vector<int> siz, par;

    UnionFind(int n) : siz(n, 1), par(n, -1) {}

    int root(int x) {
        if (par[x] == -1) return x;
        else return par[x] = root(par[x]);
    }

    bool isSame(int x, int y) { return root(x) == root(y); }

    bool unite(int x, int y) {
        int rx = root(x);
        int ry = root(y);

        if (rx == ry) return false;

        if (siz[x] >= siz[y]) par[ry] = rx, siz[rx] += siz[ry];
        else par[rx] = ry, siz[ry] += siz[rx];

        return true;
    }

    int size(int x) { return siz[root(x)]; }
};

int main(void) {
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    rep(i, n) cin >> a[i];
    sort(ALL(a));

    UnionFind uf(n);

    rep(i, n) {
        int j = (i + 1) % n;
        if (a[i] == a[j] || (a[i] + 1) % m == a[j]) uf.unite(i, i + 1);
    }
    vector<long long> sum(n, 0);

    rep(i, n) sum[uf.root(i)] += a[i];

    long long mx = 0, tot = 0;
    rep3(x, sum) mx = max(mx, x);
    rep3(x, a) tot += x;
    cout << tot - mx << endl;

    return 0;
}
