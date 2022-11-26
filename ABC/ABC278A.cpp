#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)

int main(void) {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    rep(i, n) cin >> a[i];
    rep(i, k) {
        a.erase(a.begin());
        a.push_back(0);
    }
    rep(i, n) cout << a[i] << " ";
    cout << endl;
    return 0;
}
