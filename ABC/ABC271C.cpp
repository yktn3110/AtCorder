#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

#define rep2(i, n) for (int i = 1; i <= (n); i++)

int main(void) {
    int n;
    cin >> n;
    vector<bool> possessed(n, false);
    int temp;

    rep2(i, n) {
        cin >> temp;
        if (n >= temp) possessed[temp] = true;
    }

    int loop = 0;

    while (n >= 0) {
        loop++;
        if (possessed[loop]) {
            n--;
        } else {
            n--;
            n--;
        }
    }
    cout << --loop << endl;
    return 0;
}
