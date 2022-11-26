#include <iostream>
#include <string>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rep2(i, n) for (int i = 1; i <= (n); i++)

int main(void) {
    int n;
    string dist = "0123456789ABCDEF";

    cin >> n;

    cout << dist[n / 16] << dist[n % 16] << endl;

    return 0;
}
