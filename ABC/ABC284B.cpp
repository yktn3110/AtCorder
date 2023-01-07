#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    cin.tie(0)->sync_with_stdio(0);

    int t;

    cin >> t;

    rep(i, t) {
        int n;
        cin >> n;
        int tmp, cnt = 0;
        rep(x, n) {
            cin >> tmp;
            if (tmp % 2) cnt++;
        }
        cout << cnt << "\n";
    }

    cout << endl;
    return 0;
}
