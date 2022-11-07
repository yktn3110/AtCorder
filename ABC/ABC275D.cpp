/* #include <bits/stdc++.h> */
#include <iostream>
#include <unordered_map>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

unordered_map<long long, long long> memo;

long long f(long long x) {
    long long ret;
    if (x == 0) return 1;
    if (memo.count(x)) return memo[x];
    ret = f(x / 2) + f(x / 3);
    return memo[x] = ret;
}

int main(void) {
    long long s;

    cin >> s;

    cout << f(s) << endl;

    return 0;
}
