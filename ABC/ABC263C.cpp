#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()
using ll = long long;

int main(void) {
    int n, m;
    set <vector<int>> st;
    cin >> n >> m;
    
    vector<int> a(m);
    rep(i,m) a[i] = i+1;


    do {
        vector<int> b;
        bool done = false;
        int before = 0;
        rep(i,n) {
            b.push_back(a[i]);
        }
        sort(ALL(b));
        st.insert(b);
    }
    while (next_permutation(ALL(a)));

    rep3(s,st) { 
        rep3(x,s) cout << x << " ";
        cout << endl;
    }

    return 0;
}
