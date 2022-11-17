#include <algorithm>
#include <iostream>
#include <set>
#include <string>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main(void) {
    set<string> s;
    int n;
    char s1, s2;
    string ans = "Yes";
    string chk1 = "HDCS";
    string chk2 = "A23456789TJQK";

    cin >> n;

    rep(i, n) {
        cin >> s1 >> s2;
        /* if (s1 != 'H' and s1 != 'D' and s1 != 'C' and s1 != 'S') ans = "No";
        if (s2 != 'A' and s2 != '2' and s2 != '3' and s2 != '4' and
            s2 != '5' and s2 != '6' and s2 != '7' and s2 != '8' and
            s2 != '9' and s2 != 'T' and s2 != 'J' and s2 != 'Q' and s2 != 'K')
            ans = "No"; */
        if (!count(chk1.begin(), chk1.end(), s1) or
            !count(chk2.begin(), chk2.end(), s2))
            ans = "No";
        string temp{s1, s2};
        if (s.count(temp)) ans = "No";
        if (ans == "No") break;
        s.insert(temp);
    }

    cout << ans << endl;
    return 0;
}
