#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()

int main(void) {
    int n;
    map<int, int> mp;

    cin >> n;

    rep(i, n) {
        int temp;
        cin >> temp;
        mp[temp] = i;
    }

    vector<int> cnt(n, 0);

    rep(i, n) {
        int diff = mp[i] - i;
        if (diff < 0) diff = n + diff;
        cnt[diff]++;
        cnt[diff + 1]++;
        if (diff != 0) cnt[diff - 1]++;
        else cnt[n - 1]++;
    }
    int mx = 0;
    rep3(x, cnt) mx = max(mx, x);

    cout << mx << endl;
    return 0;
}
