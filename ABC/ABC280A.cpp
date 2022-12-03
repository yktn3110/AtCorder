#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    int h, w, ans = 0;
    cin >> h >> w;

    rep(i, h) rep(i, w) {
        char tmp;
        cin >> tmp;
        if (tmp == '#') ans++;
    }

    cout << ans << endl;
    return 0;
}
