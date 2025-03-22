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
    string S;
    int cnt = 0;
    cin >> S;

    char target = 'i';
    for (char c : S) {
        if (c == target) {
            target = (target == 'i') ? 'o' : 'i';
        } else {
            cnt++;
        }
    }
    if (target == 'o') {
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
