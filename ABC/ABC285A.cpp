#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    int a, b;
    cin >> a >> b;

    if (b == a * 2 || b == a * 2 + 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
