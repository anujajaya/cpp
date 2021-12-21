// #include <iostream>
// using namespace std;
// class car
// {
// public:
//     char div;
//     string schoolName;
//     int number;
//     string name;
//     car()
//     {
//         div = 'A';
//         schoolName = "ABCD";
//     }
//     car(int x, string y)
//     {
//         number = x;
//         name = y;
//     }
//     void display()
//     {
//         cout << "student name = " << name << endl;
//         cout << "student number = " << number << endl;
//     }
// };
// int main()
// {
//     car two;
//     car one = car(12, "ACHU");
//     car three=car(14,"ANU");
//     one.display();
//     cout << "division = "<<two.div << endl;
//     cout <<"school name = "<< two.schoolName << endl;
//     three.display();
//     cout << "division = "<<two.div << endl;
//     cout <<"school name = "<< two.schoolName << endl;
//     return 0;
// }

#include<iostream>
#include<cmath>
using namespace std;
class book{
    public:
  int mrp;
  int id;
  string name;
  string bookName;
  book(){
      id=random();
      bookName="noteBook";
  }
  book(int x,string y){
      mrp=x;
      name =y;
  }
  void display(){
      cout<<"name of the book = "<<name<<endl;
      cout<<"mrp of the book is = "<<mrp<<endl;
  }
};
int main(){
    book one;
    cout<<"book id = "<<one.id<<endl;
    cout<<"book name is = "<<one.bookName<<endl;
    book two = book(500,"papergrid");
    two.display();
    


    return 0;
}