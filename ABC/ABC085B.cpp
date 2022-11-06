#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    int cnt = 0, n;

    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    cnt++;
    auto now = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] < now) {
            cnt++;
            now = a[i];
        }
    }
    cout << cnt << endl;
    return 0;
}
