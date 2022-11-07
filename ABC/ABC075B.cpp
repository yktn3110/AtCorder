#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

void func(vector<vector<int>>& map, int i, int j, int imax, int jmax) {
    for (int x = i - 1; (x <= (i + 1)) && (x < imax); x++)
        for (int y = j - 1; (y <= (j + 1)) && (y < jmax); y++) {
            if ((x == i) && (y == j)) continue;
            if ((x < 0) || (y < 0)) continue;
            map[x][y]++;
        }
}

int main(void) {
    int h, w;

    cin >> h >> w;

    vector<vector<char>> input(h, vector<char>(w));
    vector<vector<int>> map(h, vector<int>(w, 0));

    rep(i, h) rep(j, w) {
        cin >> input[i][j];
        if (input[i][j] == '#') func(map, i, j, h, w);
    }

    rep(i, h) {
        rep(j, w) {
            if (input[i][j] != '#') cout << map[i][j];
            else cout << '#';
        }
        cout << endl;
    }

    return 0;
}
