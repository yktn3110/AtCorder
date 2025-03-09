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
    int a[n];
    
    rep(i,n) {
        cin >> a[i];
        if (i == 0) continue;
        if (a[i] <= a[i-1]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;   
    return 0;
}
