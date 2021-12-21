// #include <iostream>
// using namespace std;
// class student
// {
//     int hide;
//     int age;
//     string name;
//     public:
//     void getdetails(int a, string b)
//     {
//         age = a;
//         name = b;
//     }

//     void display()
//     {   hide=age*5;
//         cout << "name is = " << name << endl;
//         cout << "age is = " << age << endl;
//         cout<<"hide value is ="<<hide<<endl;
//     }
// };
// int main()
// {
//     student one,second,third;

//     one.getdetails(10, "Anuja");
//     second.getdetails(12,"Apple");
//     third.getdetails(16,"Orange");
//     one.display();
//     third.display();
//     second.display();
//     return 0;
// }

#include <iostream>
using namespace std;
class student
{
public:
    int hide;
    int age;
    string name;

    void getdetails(int a, string b)
    {
        age = a;
        name = b;
    }
};
int main()
{
    student one, second, third;

    one.getdetails(10, "Anuja");
    second.getdetails(12, "Apple");
    third.getdetails(16, "Orange");
    cout << one.name << endl;

    return 0;
}
