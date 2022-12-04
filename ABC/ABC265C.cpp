#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    int h, w;
    set<pair<int, int>> st;
    cin >> h >> w;
    vector<vector<char>> dist(h + 1, vector<char>(w + 1));
    vector<vector<bool>> his(h + 1, vector<bool>(w + 1, false));

    rep2(i, h) rep2(j, w) {
        st.insert(pair<int, int>(i, j));
        cin >> dist[i][j];
    }
    pair<int, int> next = pair<int, int>(1, 1), now = pair<int, int>(1, 1);

    while (st.count(next)) {
        now = next;
        if (his[next.first][next.second] == true) {
            cout << -1 << endl;
            return 0;
        }
        his[next.first][next.second] = true;
        switch (dist[next.first][next.second]) {
            case ('R'): {
                next.second++;
                break;
            }
            case ('L'): {
                next.second--;
                break;
            }
            case ('U'): {
                next.first--;
                break;
            }
            case ('D'): {
                next.first++;
                break;
            }
            default:
                break;
        }
    }
    cout << now.first << " " << now.second << endl;
    return 0;
}
