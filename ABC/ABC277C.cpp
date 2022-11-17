#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int depth_max(map<int, vector<int>> &G, int s) {
    int N = (int)G.size();
    set<int> check;
    queue<int> que;

    check.insert(s);
    que.push(s);

    while (!que.empty()) {
        int t = que.front();
        que.pop();
        for (auto x : G[t]) {
            if (check.count(x)) continue;
            que.push(x);
            check.insert(x);
        }
    }

    return *(check.rbegin());
}

int main(void) {
    int n, a, b;
    map<int, vector<int>> G;

    cin >> n;

    rep(i, n) {
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    cout << depth_max(G, 1) << endl;

    return 0;
}
