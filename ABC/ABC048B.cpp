#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    long long a, b, x, num = 0;

    cin >> a >> b >> x;
    if ((a % x) == 0) num++;
    num += b / x - a / x;

    cout << num << endl;
    return 0;
}
