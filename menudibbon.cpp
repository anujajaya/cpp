#include <iostream>
using namespace std;
int main()
{

    int choice, a, b, addi, sub, mult, divi,menu=1;
while(menu==1){
    cout << "choose the operation : "
         << "\n"
         << "1.addition"
         << "\n"
         << "2.Subtraction"
         << "\n"
         << "3.multiplication"
         << "\n"
         << "4.division" << endl;
    cin >> choice;
    cout << "enter the numbers" << endl;
    cin >> a >>b;
    
    switch (choice)
    {
    case 1:
        addi = a + b;
        cout << "Answer =" << addi << endl;
        break;
    case 2:
        sub = a - b;
        cout << "Answer = " << sub << endl;
        break;
    case 3:
        mult = a * b;
        cout << "Answer = " << mult << endl;
        break;
    case 4:
        divi = a / b;
        cout << "Answer = " << divi << endl;
        break;
    }
    cout<<"Do you want to try again"<<endl;
    cin>>menu;
}
    return 0;
}