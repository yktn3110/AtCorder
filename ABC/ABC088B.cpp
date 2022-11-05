#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    int scoreA = 0, scoreB = 0;
    int max_score = 0;

    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    for (int i = 0; i < n; i++)
    {
        /* scoreA += *max_element(a, a + (sizeof(a) / sizeof(*a))); */
        if (!(i % 2))
        {
            scoreA += a[i];
        }
        else
        {
            scoreB += a[i];
        }
    }

    cout << scoreA - scoreB << endl;

    return 0;
}
