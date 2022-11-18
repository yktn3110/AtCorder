#include <iomanip>
#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    int a, b;

    cin >> a >> b;

    cout << fixed;
    cout << setprecision(3);
    cout << double(b) / double(a) << endl;
    return 0;
}
