#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    int h, w;

    cin >> h >> w;
    vector<int> box(w, 0);

    rep(i, h) rep(j, w) {
        char temp;
        cin >> temp;
        if (temp == '#') box[j]++;
    }

    rep(i, w) cout << box[i] << " ";
    cout << endl;
    return 0;
}
