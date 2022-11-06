#include <iostream>

using namespace std;

int main(void)
{
    string s;
    int n = -1;
    int i = 1;

    cin >> s;

    for (int i = 1; i <= s.size(); i++)
    {
        if (s[i - 1] == 'a') n = i;
    }

    if (n != -1)
        cout << n << endl;
    else
        cout << "-1" << endl;

    return 0;
}
