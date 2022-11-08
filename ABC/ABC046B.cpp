#include <iostream>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    int n, k;
    unsigned long long seki = 1;

    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        if (i == 1) seki *= k;
        else seki *= (k - 1);
    }

    cout << seki << endl;
    return 0;
}
