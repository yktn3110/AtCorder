#include <iostream>

using namespace std;

int main(void)
{
    int A, B, C, x;
    int cnt = 0;

    cin >> A >> B >> C >> x;

    for (int a = A; a >= 0; a--)
    {
        for (int b = B; b >= 0; b--)
        {
            for (int c = C; c >= 0; c--)
            {
                if (500 * a + 100 * b + 50 * c == x)
                    cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}

#if 0
int main(void)
{
    int pattern_num = 0;
    int max_500n = 0;
    int max_100n = 0;
    int max_50n = 0;
    int num_500 = 0;
    int num_100 = 0;
    int num_50 = 0;
    int sum;
    int rest;

    cin >> max_500n;
    cin >> max_100n;
    cin >> max_50n;
    cin >> sum;

    /* calc the pattern when num of 500yen is max */
    if (0 == (sum % 50))
    {
        if (sum < 500)
        {
            num_500 = 0;
        }
        else if ((sum / 500) > max_500n)
        {
            num_500 = (sum / 500);
        }
        else
        {
            num_500 = max_500n;
        }

        rest = sum - num_500 * 500;

        if (sum < 100)
        {
            num_100 = 0;
        }
        else if ((sum / 100) > max_100n)
        {
            num_100 = (sum / 100);
        }
        else
        {
            num_100 = max_100n;
        }

        rest = rest - num_100 * 100;

        if ((rest / 50) < max_50n)
        {
            num_50 = rest / 50;
            pattern_num++;
        }
        else
        {
            pattern_num = 0;
        }

        /* find other patterns */

        if (pattern_num != 0)
        {
            while (num_500 > 0)
            {
                for (int i = 5; i >= 0; i++)
                {
                    if (((max_100n - num_100) >= i) && ((max_50n - num_50) >= ((-2) * i + 10)))
                    {
                        pattern_num++;
                    }
                }
                num_500--;
            }
        }
    }
    else
    {
        pattern_num = 0;
    }

    cout << pattern_num << endl;

    return 0;
}
#endif
