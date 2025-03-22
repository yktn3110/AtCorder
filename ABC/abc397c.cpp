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

    vector<int> inp(n),inp2(n);
    rep(i,n) {
       cin >> inp[i];
    }
    inp2 = inp;
    reverse(ALL(inp2));
    
    vector<int> G(n),P(n);
    set<int> st1,st2;

    G[0] = 1;
    P[0] = 1;
    st1.insert(inp[0]);
    st2.insert(inp2[0]);
    
    rep2(i,n-2) {
        st1.insert(inp[i]);
        st2.insert(inp2[i]);
        G[i] = st1.size();
        P[i] = st2.size();
    }
    int max = 0;
    rep(i,n-1) {
        int sum = G[i] + P[n-i-2];
        if (max < sum) max = sum;
    }
    cout << max << endl;
    return 0;
}
