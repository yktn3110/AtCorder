#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    int n;
    vector<int> odd;
    vector<int> even;

    cin >> n;

    rep(i, n) {
        int temp;
        cin >> temp;
        if (temp % 2) odd.push_back(temp);
        else even.push_back(temp);
    }
    sort(odd.rbegin(), odd.rend());
    sort(even.rbegin(), even.rend());

    int max1 = -1;
    int max2 = -1;
    if (odd.size() >= 2) max1 = odd[0] + odd[1];
    if (even.size() >= 2) max2 = even[0] + even[1];

    cout << ((max1 > max2) ? max1 : max2) << endl;
    return 0;
}
