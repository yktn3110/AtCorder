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
    int a[n], num,min=1000000000;
    rep(i,n) {
        cin >> a[i];
        num = 0;
        while (a[i] % 2 == 0) {
            a[i] /= 2;
            num++;
        }
        if (num < min) min = num;

    }
    cout << min << endl;
    return 0;
}
