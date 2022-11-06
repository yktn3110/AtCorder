#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

bool func(int t, int a, int b) {
    if ((t < (a + b)) || (((t - (a + b)) % 2) == 1)) return false;

    return true;
}

int main(void) {
    int n;
    string ret = "No";

    cin >> n;

    vector<int> t(n);
    vector<int> x(n);
    vector<int> y(n);

    rep(i, n) cin >> t[i] >> x[i] >> y[i];

    if (func(t[n - 1], x[n - 1], y[n - 1])) {
        int i = n - 1;
        int dt, dx, dy;
        ret = "Yes";

        while (i > 0) {
            dt = t[i] - t[i - 1];
            dx = abs(x[i] - x[i - 1]);
            dy = abs(y[i] - y[i - 1]);

            if (func(dt, dx, dy)) {
                i--;
            } else {
                ret = "No";
                break;
            }
        }
    }

    cout << ret << endl;
    return 0;
}
