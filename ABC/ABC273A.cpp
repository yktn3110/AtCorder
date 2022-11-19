#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int func(int x) {
    if (x == 0) return 1;
    else return func(x - 1) * x;
}

int main(void) {
    int n;
    cin >> n;
    cout << func(n) << endl;
    return 0;
}
