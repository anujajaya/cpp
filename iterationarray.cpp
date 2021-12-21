#include <iostream>
using namespace std;
int main()
{
    int a, b, c[5], r = 0;
    cout << "enter a" << endl;
    cin >> a;
    while (a != 0)
    {
        b = a % 10;
        c[r] = b;
        a = a / 10;
        r++;
    }
    for (int h = 0; h > r; h++)
    {
        cout << c[h] << endl;
    }

    return 0;
}