#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void)
{
    char me[9][9];
    set<pair<int, int>> pawn;
    int cnt_me = 0;
    int cnt_square = 0;
    vector<pair<int, int>> vec;

    rep(i, 9)
        rep(j, 9) {
            cin >> me[i][j];
            if (me[i][j] == '#') {
                pawn.insert(pair<int, int>(i, j));
                vec.push_back(pair<int, int>(i,j));
            }
        }

    int n = vec.size();

    rep(o,n) rep(p,n) if(o != p) {
        pair<int,int> ai = vec[o], bi = vec[p];
        int dx = bi.first - ai.first;
        int dy = bi.second - ai.second;
        pair<int,int> ci {bi.first - dy, bi.second + dx};
        pair<int,int> di {ci.first - dx, ci.second - dy};
        if ((pawn.count(ci)) && pawn.count(di)) cnt_square ++;
    }

    cout << cnt_square / 4 << endl;
    return 0;
}
