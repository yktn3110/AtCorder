#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    string s;
    cin >> s;

    reverse(ALL(s));

    ll num = 0;
    int dig = 0;
    rep3(c, s) {
        ll mul = 1;
        rep(i, dig) mul *= (ll)26;
        num += (ll)(c - 'A' + 1) * mul;
        dig++;
    }

    cout << num << endl;
    return 0;
}
