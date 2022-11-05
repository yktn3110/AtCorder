#include <iostream>

using namespace std;

int main(void)
{
    int output[3] = {-1, -1, -1};
    int n, sum;
    cin >> n >> sum;

    for (auto i = n; i >= 0; i--)
    {
        /* if (10000 * i > sum)
            continue; */
        for (auto j = n - i; j >= 0; j--)
        {
            /* if (10000 * i + 5000 + j > sum)
                continue; */
            auto k = n - i - j;
            if (sum == 10000 * i + 5000 * j + k * 1000)
            {
                output[0] = i;
                output[1] = j;
                output[2] = k;
                break;
            }
        }
    }

    cout << output[0] << " " << output[1] << " " << output[2] << endl;
    return 0;
}
