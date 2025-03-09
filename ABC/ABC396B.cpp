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

    int Q,x;
    stack<int> stk;
    cin >> Q;
    rep(i,Q) {
        cin >> x;
        if (x == 1) {
            cin >> x;
            stk.push(x);
        } else if (x == 2) {
            if (!stk.empty()) {
                cout << stk.top() << endl;
                stk.pop();
            } else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}
