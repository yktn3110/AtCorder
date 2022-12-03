#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    int n;
    cin >> n;

    rep2(i, n) {
        int s, sum, diff = 0;
        cin >> s;
        if (i == 1) {
            diff = s;
            sum = diff;
        } else {
            diff = s - sum;
            sum += diff;
        }
        cout << diff << " ";
    }
    return 0;
}
