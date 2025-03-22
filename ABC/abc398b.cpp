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
    vector<int> card(13,0);

    rep(i,7) {
        int num;
        cin >> num;
        card[num-1]++;
    }
    int cnt3=0,cnt2=0;
    for(int x:card) {
        if (x >= 3) cnt3++;
        if (x >= 2) cnt2++;
    }
    if (cnt3 != 0 && cnt2 != 0 && cnt3 + cnt2 > 2) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
