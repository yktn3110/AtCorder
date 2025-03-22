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
    int n,tr,tc;

    cin >> n >> tr >> tc;

    string s;
    cin >> s;

    set<pair<int,int>> smokes;
    int r=0,c=0;
    smokes.insert({r,c});
    rep(i,n) {
        char wind = s[i];
        if (wind == 'N') r++;
        else if (wind == 'W') c++;
        else if (wind == 'S') r--;
        else if (wind == 'E') c--;
        smokes.insert({r,c});
        if (smokes.count({r+tr,c+tc})) cout << 1;
        else cout << 0; 
    }
    cout << endl;
    return 0;
}
