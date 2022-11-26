#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()

int main(void) {
    cin.tie(0);
    string s, t;

    cin >> s >> t;

    if (s.find(t) != string::npos) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
