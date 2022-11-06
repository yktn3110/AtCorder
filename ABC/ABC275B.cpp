#include <iostream>

using namespace std;

int main(void)
{
    unsigned long long A, B, C, D, E, F;
    unsigned long long x, y;
    long long diff;

    cin >> A >> B >> C >> D >> E >> F;
    x = (((A % 998244353) * (B % 998244353) % 998244353) * (C % 998244353)) % 998244353;
    y = (((D % 998244353) * (E % 998244353) % 998244353) * (F % 998244353)) % 998244353;

    diff = x - y;

    if (diff >= 0)
    {
        cout << diff << endl;
    }
    else
    {
        cout << (998244353 + diff) << endl;
    }

    return 0;
}
