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
