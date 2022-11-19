#include <algorithm>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    long long x;
    int k;

    cin >> x >> k;

    long long t = 1;
    rep(i, k) {
        int d = x / t % 10;

        t *= 10;
        x = x / t * t;
        if (d >= 5) x += t;
    }
    cout << x << endl;
    return 0;
}
/*     if (k > (int)x.size()) {
        cout << 0 << endl;
        return 0;
    }

    reverse(x.begin(), x.end());

    rep(i, k) {
        if ((i + 1) >= (int)x.size()) break;
        if (x[i] >= '5') x[i + 1]++;
        x[i] = '0';
    }

    rep(i, (int)x.size()) {
        if (x[i] > '9') {
            if (i == (int)x.size() - 1) x.push_back('1');
            else x[i + 1]++;
            x[i] -= 10;
        }
    }

    reverse(x.begin(), x.end()); */
