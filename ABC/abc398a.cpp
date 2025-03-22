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
    if (n%2==0) {
        rep2(i,n) {
            if (i == (n/2) || i == (n/2 + 1)) cout << "=";
            else cout << "-";
        }
    } else {
        rep2(i,n) {
            if (i == ((n+1)/2)) cout << "=";
            else cout << "-";
        }
    }
    cout << endl;
    return 0;
}
