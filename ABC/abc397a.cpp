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
    double x;
    cin >> x;
    if (x >= 38) cout << 1 << endl;
    else if (x >= 37.5 ) cout << 2 << endl;
    else cout << 3 << endl;
    return 0;
}
