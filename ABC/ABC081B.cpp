#include <iostream>

using namespace std;

bool chk_oddInNumbers(int *a, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (a[i] % 2)
        {
            return true;
        }
    }
    return false;
}

int main(void)
{
    int N;
    int A[200];
    int cnt = 0;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    while (!chk_oddInNumbers(&A[0], N))
    {
        for (int i = 0; i < N; i++)
        {
            A[i] /= 2;
        }

        cnt++;
    }

    cout << cnt << endl;

    return 0;
}
