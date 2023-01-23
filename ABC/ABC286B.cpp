#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    string s, sx = "";
    bool flag = false;
    int n;

    cin >> n >> s;
    rep(i, n) {
        if (flag) {
            if (s[i] == 'a') sx += "ya";
            else sx += s[i];
        } else {
            sx += s[i];
        }
        if (s[i] == 'n') flag = true;
        else flag = false;
    }
    cout << sx << endl;
    return 0;
}
