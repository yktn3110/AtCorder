#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;
const long long INF = 1LL << 60;

int main(void)
{
    cin.tie(0)->sync_with_stdio(0);
    int n,m;
    cin >> n >> m;
    vector <int> res(n),a(m);
    rep(i,n) res[i] = i+1;
    rep(i,m) {
        cin >> a[i];
        res.erase(remove(res.begin(), res.end(), a[i]), res.end());
    }
    cout << res.size() << endl;
    rep(i,res.size()) cout << res[i] << " ";
    cout << endl;
    return 0;
}
