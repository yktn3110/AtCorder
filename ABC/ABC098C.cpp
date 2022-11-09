#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    int n;
    int min;
    cin >> n;

    vector<int> cnt1(n);
    vector<int> cnt2(n);
    char temp;

    rep(i, n) {
        cin >> temp;
        if (i != 0) {
            cnt1[i] = cnt1[i - 1];
            cnt2[i] = cnt2[i - 1];
        }
        if (temp == 'W') cnt1[i]++;
        else cnt2[i]++;
    }
    rep(i, n) {
        if (i == 0) min = cnt2[n - 1] - cnt2[0];
        else if (i == n - 1) min = std::min(min, cnt1[i - 1]);
        else min = std::min(min, cnt1[i - 1] + cnt2[n - 1] - cnt2[i]);
    }
    cout << min << endl;
    return 0;
}
