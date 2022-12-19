#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    int n;
    string ans = {};
    bool kukuri = false;

    cin >> n;

    rep(i, n) {
        char c;

        cin >> c;
        if (!kukuri && c == ',') c = '.';
        ans += c;
        if (c == '"') kukuri = kukuri ? false : true;
    }
    cout << ans << endl;

    return 0;
}
