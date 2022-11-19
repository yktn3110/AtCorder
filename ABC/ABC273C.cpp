#include <iostream>
#include <map>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    map<int, int> input;
    int n;

    cin >> n;

    rep(i, n) {
        int tmp;
        cin >> tmp;
        if (!input.count(tmp)) input[tmp] = 1;
        else input[tmp]++;
    }

    int loop = 0;
    for (auto itr = input.rbegin(); itr != input.rend(); ++itr) {
        loop++;
        cout << itr->second << endl;
    }
    for (int i = loop; i < n; i++) cout << 0 << endl;

    return 0;
}
