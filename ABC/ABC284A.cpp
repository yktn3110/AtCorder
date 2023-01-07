#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;

    string s[n];
    rep(i, n) cin >> s[i];

    rep(i, n) cout << s[n - 1 - i] << "\n";
    cout << endl;

    return 0;
}
