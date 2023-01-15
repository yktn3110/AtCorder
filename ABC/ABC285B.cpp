#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    int n;
    string s;
    cin >> n >> s;

    for (int i = 1; i < n; i++) {
        int max = 0, x = 1;

        while (x + i - 1 < n) {
            if (s[x - 1] != s[x + i - 1]) max++;
            else break;
            x++;
        }
        cout << max << "\n";
    }
    cout << endl;
    return 0;
}
