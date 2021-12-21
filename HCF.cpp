#include <iostream>
using namespace std;
int main()
{
    int n1, n2, hcf, i;
    cout << "enter n1" << endl;
    cin >> n1;
    cout << "enter n2" << endl;
    cin >> n2;
    
    for (int i = 1; i <= n1; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }

    cout << hcf << endl;

    return 0;
}


