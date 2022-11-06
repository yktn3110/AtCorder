#include <iostream>

using namespace std;

int main(void)
{
    int N;
    int h = 0;
    int max_hight = 0;
    int Nth;

    cin >> N;

    int H[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> h;
        H[i] = h;
    }

    for (int i = 0; i < N; i++)
    {
        if (max_hight < H[i])
        {
            max_hight = H[i];
            Nth = i + 1;
        }
    }
    cout << Nth << endl;

    return 0;
}
