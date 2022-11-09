#include <algorithm>
#include <iostream>
#include <set>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    char me[50][50];
    set<pair<int, int>> n;
    int h, w;
    string ans = "Yes";

    cin >> h >> w;

    rep(i, h) rep(j, w) {
        cin >> me[i][j];
        if (me[i][j] == '#') n.insert(pair<int, int>(i, j));
    }

    for (auto x : n) {
        pair<int, int> t1{x.first - 1, x.second};
        pair<int, int> t2{x.first + 1, x.second};
        pair<int, int> t3{x.first, x.second - 1};
        pair<int, int> t4{x.first, x.second + 1};

        if (!n.count(t1) && !n.count(t2) && !n.count(t3) && !n.count(t4)) {
            ans = "No";
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
