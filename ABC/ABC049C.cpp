#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string ret = "No";
    int i = 0;
    string s;

    cin >> s;

    string l1;
    string l2;
    string l3;
    string l4;

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

    if (i == s.size())
        ret = "YES";

    cout << ret << endl;
    return 0;
}
