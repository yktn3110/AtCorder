#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    string s, t;

    cin >> s >> t;
    int ans = s.size() + 1;
    rep(i, s.size()) if (s[i] != t[i]) {
        ans = i + 1;
        break;
        }
    cout << ans << endl;
    return 0;
}
