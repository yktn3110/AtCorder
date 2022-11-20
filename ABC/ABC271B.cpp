#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)

int main(void) {
    int n, q;

    cin >> n >> q;
    vector<vector<int>> dist(n + 1, vector<int>(1, 0));

    rep2(i, n) {
        int l;
        cin >> l;
        rep2(j, l) {
            int temp;
            cin >> temp;
            dist[i].push_back(temp);
        }
    }

    rep2(i, q) {
        int x, y;
        cin >> x >> y;
        cout << dist[x][y] << endl;
    }

    return 0;
}
