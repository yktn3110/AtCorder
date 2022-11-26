#include <iostream>
#include <set>
#include <vector>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)

int main(void) {
    int n, q, t, a, b;
    set<pair<int, int>> G;
    vector<string> ans;
    cin >> n >> q;

    rep(i, q) {
        cin >> t >> a >> b;
        pair<int, int> temp(a, b);
        if (t == 1) {
            G.insert(temp);
        } else if (t == 2) {
            G.erase(temp);
        } else {
            pair<int, int> temp2(b, a);
            if (G.count(temp) && G.count(temp2)) ans.push_back("Yes");
            else ans.push_back("No");
        }
    }

    for (auto x : ans) cout << x << endl;
    return 0;
}
/*
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)


 int main(void) {
    int n, q, t, a, b;
    map<int, vector<int>> s;
    vector<string> ans;

    cin >> n >> q;

    rep(i, q) {
        cin >> t >> a >> b;
        if (t == 1) {
            if (find(s[a].begin(), s[a].end(), b) == s[a].end())
                s[a].push_back(b);
        } else if (t == 2) {
            for (auto x = s[a].begin(); x != s[a].end() && s[a].size()
!= 0; x++) if (*x == b) s[a].erase(x); } else { if ((find(s[a].begin(),
s[a].end(), b) != s[a].end()) && find(s[b].begin(), s[b].end(), a) !=
s[b].end()) ans.push_back("Yes"); else ans.push_back("No");
        }
    }

    for (auto x : ans) cout << x << endl;
    return 0;
} */
