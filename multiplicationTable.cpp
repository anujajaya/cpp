#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout << "enter the value of m" << endl;
    cin >> m;
    for (int i = 1; i <= 10; i++)
    {
    n=m*i;
        cout << m << "*" << i << "=" << n << endl;
    }

    return 0;
}