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
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> p(n), q(n);
    rep(i,n) {
        cin >> p[i];
    }
    rep(i,n) {
        cin >> q[i];
    }
    rep(i,n) {
        mp[q[i]] = p[i];
    }
    rep2(i,n) {
        cout << q[mp[i]-1] << " ";
    }
    cout << endl;
    return 0;
}
