#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

template <class T>
inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
template <class T>
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

int dp[3010][3010] = {0};

int main(void) {
    string s, t;
    cin >> s >> t;

    rep(i, s.size()) rep(j, t.size()) {
        if (s[i] == t[j]) chmax(dp[i + 1][j + 1], dp[i][j] + 1);
        chmax(dp[i + 1][j + 1], dp[i + 1][j]);
        chmax(dp[i + 1][j + 1], dp[i][j + 1]);
    }

    string res = "";
    int i = (int)s.size(), j = (int)t.size();

    while (i > 0 && j > 0) {
        if (dp[i][j] == dp[i - 1][j]) i--;
        else if (dp[i][j] == dp[i][j - 1]) j--;
        else res = s[i - 1] + res, i--, j--;
    }

    cout << res << endl;
    return 0;
}
