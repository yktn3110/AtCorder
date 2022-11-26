#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()

int main(void) {
    cin.tie(0);
    string word;
    int cnt = 0;
    cin >> word;
    for (char c : word) {
        if (c == 'v') cnt++;
        else cnt++, cnt++;
    }
    cout << cnt << endl;
    return 0;
}
