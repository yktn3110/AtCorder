#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;
const long long INF = 1LL << 60;

int main(void)
{
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;

    vector<vector<char>> map(n, vector<char>(n));

    rep(x,n/2+1) {
        int y = n - x -1;
        char c;
        if(x%2) c = '.';
        else c = '#';

        for(int i = x; i <= y; i++) {
            for (int j = x; j <= y; j++) {
                map[i][j] = c;
            }
        }
        
    
    }

    rep(i,n){
        rep(j,n) cout << map[i][j];
        cout << endl;
    } 
    return 0;
}
