#include <stdio.h>
#include <iostream>
using namespace std;

void addTwoNumbers(int, int);
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
    addTwoNumbers(*pa, *pb);
    return 0;
}

void addTwoNumbers(
    int *cpa,
    int *cpb)
{
    int first, second;
    first = *cpa;
    second = *cpb;
    cout << "first : " << first << endl;
    cout << "second : " << second << endl;
}