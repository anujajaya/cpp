#include <iostream>
using namespace std;
int main()
{
    char lett[10], name[10];
    int x = 0, y;
    cout << "enter the string" << endl;
    cin >> lett;
    while (lett[x] != '\0')
    {
        x = x + 1;
    }
    // for (x--; x >= 0; name[y++] = lett[x--])
    //     ;
    for (y = 1; x >= 0; y++)
    {
        cout << lett[x--] << endl;
        name[y] = lett[x--];
    }
    name[y] = 0;
    cout << "reversed string  " << name << endl;

    return 0;
}
