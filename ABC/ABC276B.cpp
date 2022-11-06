#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N = 0, M = 0; /* N:city num, M:load num */

    cin >> N >> M;

    vector<vector<int>> l(M, vector<int>(2));
    for (int i = 0; i < M; i++) cin >> l[i][0] >> l[i][1];

    vector<vector<int>> m(N, vector<int>()); /* city name that load leads to */

    for (int i = 0; i < M; i++) {
        m[l[i][0] - 1].push_back(l[i][1]);

        m[l[i][1] - 1].push_back(l[i][0]);
    }

    for (int i = 0; i < N; i++) {
        sort(m[i].begin(), m[i].end());
        cout << m[i].size();
        for (int j = 0; j < m[i].size(); j++) cout << " " << m[i][j];
        cout << endl;
    }

    return 0;
}
