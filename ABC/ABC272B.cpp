#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    int n, m, k;
    string ans = "Yes";
    map<int, set<int>> my_friend;

    cin >> n >> m;

    rep(i, m) {
        cin >> k;
        vector<int> dist(k);
        rep(j, k) cin >> dist[j];

        rep(x, k) {
            for (int y = x + 1; y < k; y++) {
                my_friend[dist[x]].insert(dist[y]);
                my_friend[dist[y]].insert(dist[x]);
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (my_friend[i].size() != n - 1) {
            ans = "No";
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
