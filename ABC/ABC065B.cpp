#include <iostream>
#include <vector>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int cnt = 1;
int x;

int func(vector<int> &arg, int n) {
    if (cnt == 1) x = 1;

    if (arg[x] == 2) return cnt;
    x = arg[x];
    cnt++;
    if (cnt >= n) return -1;
    return func(arg, n);
}

int main(void) {
    int ans = -1, n;

    cin >> n;

    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++) cin >> a[i];

    ans = func(a, n);

    cout << ans << endl;
    return 0;
}
