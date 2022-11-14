#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    int n;
    int cnt = 0;
    cin >> n;

    vector<int> l(n);

    rep(i, n) cin >> l[i];

    rep(i, n) rep(j, i) rep(k, j) {
        if ((l[i] == l[j]) || (l[j] == l[k]) || (l[k] == l[i])) continue;
        if ((l[i] < l[j] + l[k]) and (l[j] < l[k] + l[i]) and
            (l[k] < l[i] + l[j]))
            cnt++;
    }

    cout << cnt << endl;
    return 0;
}
