#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)
#define rep3(x, n) for (auto x : n)
#define ALL(obj) (obj).begin(), (obj).end()

int main(void) {
    long long a, b;
    cin >> a >> b;

    auto f = [&](long long n) -> double {
        return (double)b * n + (double)a / sqrt(n + 1);
    };

    long long l = 0, r = 1000000000000000000, m1, m2;

    while (r - l > 2) {
        m1 = (2 * l + r) / 3;
        m2 = (l + 2 * r) / 3;
        if (f(m1) > f(m2)) l = m1;
        else r = m2;
    }
    double ans = a;
    for (long long i = l; i <= r; i++) ans = min(ans, f(i));

    cout << fixed << setprecision(10) << ans << endl;
}

/* int main(void) {
    cin.tie(0);
    long long a, b;

    cin >> a >> b;

    long double before = a;
    long double next = a;
    int cnt = 1;
    while (next <= before) {
        before = next;
        next = b * cnt + a / sqrt(cnt + 1);
        cnt++;
    }

    cout << fixed << setprecision(10) << before << endl;

    return 0;
} */
