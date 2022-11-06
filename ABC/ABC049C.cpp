#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    string ret = "No";
    string s;
    string n[4] = {"dream", "dreamer", "erase", "eraser"};

    cin >> s;

    reverse(s.begin(), s.end());
    for (int i = 0; i < 4; i++)
        reverse(n[i].begin(), n[i].end());

    if (s.substr(i, n[i].size()))

        while (i <= (s.size() - 5))
        {

            l1 = s.substr(i, 5);
            l2 = s.substr(i + 5, 3);
            l3 = s.substr(i + 5, 2);
            l4 = s.substr(i + 5, 1);

            if (l1 == "dream")
            {
                i += 5;
                if ((l2 != "era") && (l3 == "er"))
                {
                    i += 2;
                }
            }
            else if (l1 == "erase")
            {
                i += 5;
                if (l4 == "r")
                {
                    i += 1;
                }
            }
            else
            {
                break;
            }
        }

    cout << ret << endl;
    return 0;
}
