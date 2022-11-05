#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c;
    string s;

    cin >> a;
    cin >> b >> c;
    cin >> s;
    cout << (a + b + c) << " " << s << endl;

    return 0;
}

/* C */
/* int main(void)
{
    int a, b, c;
    char s[101];

    scanf("%d", &a);
    scanf("%d %d", &b, &c);
    scanf("%s", s);

    printf("%d %s\n",a+b+c,s);
} */
