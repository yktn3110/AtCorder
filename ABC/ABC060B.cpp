#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    int n;
    int ans = 1;

    cin >> n;

    while (n > 1) {
        int x = n;

        while ((x % 2) == 0) {
            x /= 2;
            if (x == 1) {
                ans = n;
                break;
            }
        }
        if (ans != 1) break;
        n--;
    }

    cout << ans << endl;
    return 0;
}
