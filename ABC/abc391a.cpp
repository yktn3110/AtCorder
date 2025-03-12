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
    string D;
    cin >> D;

    if (D == "N")
        cout << "S";
    else if (D == "S")
        cout << "N";
    else if (D == "E")
        cout << "W";
    else if (D == "W")
        cout << "E";
    else if (D == "NE")
        cout << "SW";
    else if (D == "NW")
        cout << "SE";
    else if (D == "SE")
        cout << "NW";
    else if (D == "SW")
        cout << "NE";
    return 0;
}
