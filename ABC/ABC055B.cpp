#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    long long ans = 1;
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        ans *= i;
        while (ans >= 1000000007) ans %= 1000000007;
    }
    cout << ans << endl;
    return 0;
}
