#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    int n, sum = 0;
    cin >> n;

    rep(i, n) {
        int temp;
        cin >> temp;
        sum += temp;
    }
    cout << sum << endl;

    return 0;
}
