#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void)
{
    int n;
    ll same=0;
    cin >> n;
    vector<int> dist(n+1);
    rep2(i,n) {
        cin >> dist[i];         
        if (i == dist[i]) same++;
    }
    ll cnt = 0;
    rep2(i,n) if(dist[dist[i]] == i) cnt++;
    
    cnt -= same;
    cnt /= 2;
    cnt += same*(same-1)/2;
    
    cout << cnt << endl;
    return 0;
}
