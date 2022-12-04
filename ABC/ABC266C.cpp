#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    vector<int> x(4), y(4);

    float sum = 0;
    float c_sum = 0;
    rep(i, 4) cin >> x[i] >> y[i];

    rep(i, 4) {
        int dx1 = x[(i + 1) % 4] - x[i];
        int dx2 = x[(i + 2) % 4] - x[i];
        int dy1 = y[(i + 1) % 4] - y[i];
        int dy2 = y[(i + 2) % 4] - y[i];

        int outer = dx1 * dy2 - dx2 * dy1;
        if (outer < 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}
