#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    char c = 'A';

    int k;
    cin >> k;
    rep(i, k) {
        cout << c;
        c++;
    }
    cout << endl;
    return 0;
}
