#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    string s;
    int cnt = 0;
    cin >> s;

    for (auto itr = s.cbegin(); itr < s.cend(); itr++) {
        auto next = itr + 1;
        if (*itr == '0' && *next == '0') cnt++, itr++;
    }

    cout << s.length() - cnt << endl;
    return 0;
}
