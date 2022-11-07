#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

bool func(int s, int t, int r) {
    if ((s >= t) && (s <= r)) return true;
    else return false;
}

int main(void) {
    vector<int> x(2);
    vector<int> y(2);
    vector<int> z;

    cin >> x[0] >> x[1] >> y[0] >> y[1];

    if (func(x[0], y[0], y[1])) z.push_back(x[0]);
    if (func(x[1], y[0], y[1])) z.push_back(x[1]);
    if (func(y[0], x[0], x[1])) z.push_back(y[0]);
    if (func(y[1], x[0], x[1])) z.push_back(y[1]);

    if (z.size())
        cout << (*max_element(z.begin(), z.end()) -
                 *min_element(z.begin(), z.end()))
             << endl;
    else cout << 0 << endl;

    return 0;
}
