#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void)
{
    cin.tie(0)->sync_with_stdio(0);
    int n,k;
    cin >> n >> k;
    int a[n];
    vector<int> b;
    rep(i,n) {
        cin >> a[i];
        if (a[i] % k )
        else b.push_back(a[i]/k);
    }

    sort.ALL(b);
    rep3(x,b) cout << x << " ";
    cout << endl;
    return 0;
}
