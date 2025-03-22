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
    map<int,int> an;
    map<int,int> mp;
    vector<bool> flag(n+1,true);
    flag[0] = false; 
    
    rep2(i,n) {
        int a;
        cin >> a;
        an[i]= a;
    }
    rep2(i,n) {
        if (mp.find(an[i]) != mp.end()) {
            flag[i] = false;
            flag[mp[an[i]]] = false;
        } else {
            mp[an[i]] = i;
        }
    }
    int max=-1;
    rep2(i,n) {
        if (!flag[i]) continue; 
        if (an[i] > an[max]) max =i;
    }
    cout << max << endl;
    return 0;
}
