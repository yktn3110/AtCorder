#include <iostream>

using namespace std;

int main(void)
{
    int n, a, b;

    int ret_sum = 0;

    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++)
    {
        int num = i, sum = 0;

        while (num != 0)
        {
            sum += num % 10;
            num /= 10;
        }

        if ((sum >= a) && (sum <= b))
        {
            ret_sum += i;
        }
    }

    cout << ret_sum << endl;

    return 0;
}
