#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;
const long long INF = 1LL << 60;

int main(void)
{
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    sort(ALL(s), [](string a, string b) {
        return a.size() < b.size();
    });
    string ans = "";
    rep(i,n) {
        ans += s[i];
    }
    cout << ans << endl;
    return 0;
}
