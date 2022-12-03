#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    int n;
    map<int, int> num_his;
    map<int, int> cnt;
    cin >> n;

    rep(i, n) {
        int a;
        int cnt2 = 0, cnt3 = 0;
        bool done2 = false;
        bool done3 = false;

        cin >> a;
        done2 = false;
        done3 = false;
        while (!done2 || !done3) {
            int div2, div3;

            div2 = a / 2;
            if (div2 * 2 != a) done2 = true;
            else {
                cnt2++;
                done2 = false;
                a = div2;
            }

            div3 = a / 3;
            if (div3 * 3 != a) done3 = true;
            else {
                cnt3++;
                done3 = false;
                a = div3;
            }
        }

        if (num_his.count(a)) num_his[a]++;
        else num_his[a] = 1;

        if (cnt.count(a)) cnt[a] += cnt2 + cnt3;
        else cnt[a] = cnt2 + cnt3;

        int num2 = a;
        int num3;
        for (int o = 0; o <= cnt2; o++) {
            if (o != 0) {
                num2 *= 2;
                if (cnt.count(num2)) cnt[num2] += cnt2 + cnt3 - o;
                else cnt[num2] = cnt2 + cnt3 - o;
                if (num_his.count(num2)) num_his[num2]++;
                else num_his[num2] = 1;
            }
            num3 = num2;

            for (int p = 0; p <= cnt3; p++) {
                if (p != 0) {
                    num3 *= 3;
                    if (cnt.count(num3)) cnt[num3] += cnt2 - o + cnt3 - p;
                    else cnt[num3] = cnt2 - o + cnt3 - p;
                    if (num_his.count(num3)) num_his[num3]++;
                    else num_his[num3] = 1;
                }
            }
        }
    }
    int mx = INT32_MAX;

    rep3(x, num_his) {
        if (x.second == n) {
            mx = min(mx, cnt[x.first]);
        }
    }

    if (cnt.size() == 1) mx = 0;

    cout << ((mx == INT32_MAX) ? -1 : mx) << endl;
    return 0;
}
