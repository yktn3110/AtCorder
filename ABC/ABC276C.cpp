#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    vector<int> P(n);

    for (auto &p : P) // N 回繰り返す
    {
        cin >> p; // 各要素に入力を読み込み
    }

    prev_permutation(P.begin(), P.end());
    for (int i = 0; i < n; i++)
    {
        cout << P[i] << " ";
    }

    cout << endl;

    return 0;
}
