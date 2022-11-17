#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    int n, x, temp;
    cin >> n >> x;

    for (int i = 1; i <= n; i++) {
        cin >> temp;
        if (temp == x) cout << i << endl;
    }

    return 0;
}
