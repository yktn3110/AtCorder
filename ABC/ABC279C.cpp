#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()

int main(void) {
    cin.tie(0);
    int h, w;
    cin >> h >> w;

    vector<vector<char>> dist1(h + 1, vector<char>(w + 1));
    vector<vector<char>> dist2(h + 1, vector<char>(w + 1));

    rep2(i, h) rep2(j, w) cin >> dist1[i][j];
    rep2(i, h) rep2(j, w) cin >> dist2[i][j];

    map<string, int> mp1;
    map<string, int> mp2;

    rep2(i, w) {
        string temp1;
        string temp2;
        rep2(j, h) {
            temp1.push_back(dist1[j][i]);
            temp2.push_back(dist2[j][i]);
        }
        mp1[temp1]++;
        mp2[temp2]++;
    }
    cout << ((mp1 == mp2) ? "Yes" : "No") << endl;

    return 0;
}
