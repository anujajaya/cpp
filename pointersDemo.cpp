#include <iostream>
using namespace std;
int addTwoNumbers(
    int *cpa,
    int *cpb)
{
    int first, second;
    first = *cpa;
    second = *cpb;
    cout << "first : " << first << endl;
    cout << "second : " << second << endl;
    return first + second
}
int main()
{
    int a, b, *pa, *pb;
    cout << "enter two numbers" << endl;
    cin >> a >> b;
    cout << "a"
         << " " << a << "\t"
         << "&a"
         << "  " << &a << endl;
    pa = &a;
    pb = &b;
    cout << "value of pa " << pa << "\n"
         << "value of *pa " << *pa << endl;
    addTwoNumbers(&a, &b);
    return 0;
}
