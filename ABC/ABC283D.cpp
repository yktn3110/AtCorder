#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    set<char> box;
    string s, ans = "Yes";
    vector<string> input;
    int now = 0;
    input.push_back("");

    cin >> s;

    rep3(c, s) {
        if (c == '(') {
            now++;
            input.push_back("");
        } else if (c == ')') {
            rep3(x, input[now]) box.erase(x);
            input.pop_back();
            now--;
        } else {
            if (box.count(c)) {
                ans = "No";
                break;
            }
            box.insert(c);
            input[now] += c;
        }
    }

    cout << ans << endl;
    return 0;
}
