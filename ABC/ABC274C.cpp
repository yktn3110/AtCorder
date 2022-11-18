#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    int n;
    cin >> n;
    vector<int> parent(2 * n + 2);

    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        parent[i * 2] = parent[i * 2 + 1] = temp;
    }

    vector<int> ans(2 * n + 2);
    ans[1] = 0;
    for (int i = 2; i <= 2 * n + 1; i++) {
        ans[i] = ans[parent[i]] + 1;
    }

    for (int k = 1; k <= 2 * n + 1; ++k) {
        cout << ans[k] << "\n";
    }
    return 0;
}
