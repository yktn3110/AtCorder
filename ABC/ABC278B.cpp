#include <iostream>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)

bool func(char a, char b, char c) {
    if (a > '2') return false;
    if ((a == '2') and (b >= '4')) return false;
    if (c >= '6') return false;
    return true;
}

int main(void) {
    string h;
    string m;

    cin >> h >> m;
    if (h.size() == 1) h = '0' + h;
    if (m.size() == 1) m = '0' + m;

    while (!func(h[0], m[0], h[1])) {
        bool h_cnt_up = false;
        if (m == "59") {
            h_cnt_up = true;
            m = "00";
        } else {
            if (m[1] == '9') {
                m[0]++;
                m[1] = '0';
            } else {
                m[1]++;
            }
        }

        if (h_cnt_up) {
            if (h == "23") {
                h = "00";
            } else {
                if (h[1] == '9') {
                    h[0]++;
                    h[1] = '0';
                } else {
                    h[1]++;
                }
            }
        }
    }

    cout << h << " " << m << endl;

    return 0;
}
