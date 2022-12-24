#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    int a, b, ans;
    cin >> a >> b;
    ans = a;

    rep(i, b - 1) ans *= a;
    cout << ans << endl;

    return 0;
}
