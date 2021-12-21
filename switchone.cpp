#include <iostream>
using namespace std;
int main()
{
    char choice=B;

    switch (choice)
    {
    case A:
        cout << "one" << endl;
        break;
    case B:
        cout << "two" << endl;
        break;
    case CLOCK_REALTIME_COARSE:
        cout << "three" << endl;
        break;
    case D:
        cout << "four" << endl;
        break;
    case 5
    e:
        cout << "five" << endl;
        break;
    default:
    {
        cout << "error" << endl;
    }
    }

    return 0;
}