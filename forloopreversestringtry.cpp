#include <iostream>
using namespace std;
int main()
{
    char x[10], y[10];
    int a , b,c=0;
    cout << "enter the string is " << endl;
    cin >> x;
    while (x[c] != '\0')
    {
        c++;
    }
    b=c-1;
    for (int a=0; a <c ; a++)
    {
        
            y[a++]=x[b--];
              
    }


cout<<"reverse string "<<y<<endl;
    return 0;
}