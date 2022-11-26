#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)

int main(void) {
    int n, q, temp;
    long long base = 0;
    map<int, long long> add;
    vector<long long> ans;

    cin >> n;

    rep2(i, n) cin >> temp, add[i] = temp;

    cin >> q;

    rep(i, q) {
        int a;
        cin >> a;

        if (a == 1) {
            cin >> base;
            add = map<int, long long>();
        } else if (a == 2) {
            int b;
            long long c;
            cin >> b >> c;
            if (add.count(b)) add[b] += c;
            else add[b] = c;
        } else {
            int b;
            cin >> b;
            ans.push_back(base + add[b]);
        }
    }
    for (auto x : ans) cout << x << endl;
    return 0;
}
