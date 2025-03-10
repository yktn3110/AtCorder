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
    string s;
    cin >> s;
    vector<int> apos,bpos,cpos;
    rep(i, s.size()) {
        if (s[i] == 'A') apos.push_back(i-1);
        else if (s[i] == 'B') bpos.push_back(i-1);
        else if (s[i] == 'C') cpos.push_back(i-1);
        else "do nothing";
    }
    int cnt = 0;
    rep(i, apos.size()) {
        rep(j, bpos.size()) {
            if (apos[i] > bpos[j]) continue;
            rep(k, cpos.size()) {
                if (bpos[j] > cpos[k]) continue;
                if ((bpos[j] - apos[i]) == (cpos[k] - bpos[j]) ) {
                    cnt++;
                }
            }
            
        }
    }
    cout << cnt << endl;
    return 0;
}
