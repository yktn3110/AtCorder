#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;
using P = pair<int, int>;

bool f(char c) { return (c >= 'A' && c <= 'Z'); }

int main(void) {
    string s;

    cin >> s;
    if (s.size() == 8) {
        if (f(s[0]) && f(s[7])) {
            string num = s.substr(1, 6);
            bool flag = true;
            rep3(c, num) if (f(c)) flag = false;
            if (flag) {
                if ((100000 <= stoi(num)) && stoi(num) <= 999999) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
