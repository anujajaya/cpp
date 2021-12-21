#include<iostream>
using namespace std;
int main(){
    int  a,b,addi,divi,mult,subt;
    char choice ;
    cout << "choose the operation : "
         << "\n"
         << "a.addition"
         << "\n"
         << "b.Subtraction"
         << "\n"
         << "c.multiplication"
         << "\n"
         << "d.division" << endl;
    cin >> choice;
    cout << "enter the numbers" << endl;
    cin >> a >>b;
switch (choice)
    {
    case 'a':
        addi = a + b;
        cout << "Answer =" << addi << endl;
        break;
    case 'b':
        subt = a - b;
        cout << "Answer = " << subt << endl;
        break;
    case 'c':
        mult = a * b;
        cout << "Answer = " << mult << endl;
        break;
    case 'd':
        divi = a / b;
        cout << "Answer = " << divi << endl;
        break;
    }
    return 0;
}