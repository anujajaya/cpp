#include <iostream>
using namespace std;
//added comment demo
int main()
{
    int num[20], number;
    string flag = "yes";

    for (int i = 0; i <= 20; i++)
    {cout << "enter number for position " << i << endl;
        cin >> num[i];
        
        cout << "position :" << i << "\t"
             << "value :" << num[i] << "\n"
             << endl;
    }

    while (flag == "yes")
    {
        cout << "number for check" << endl;
        cin >> number;
        for (int j = 0; j <= 20; j++)
        {

            if (num[j] == number)
            {
                cout << "position :" << j << endl;
                cout << "do you want to try again" << endl;
                cin >> flag;
            }
        }
    }

    return 0;
}