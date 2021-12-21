#include<iostream>
using namespace std;
class student{
public:
int number;
string name;
char division;
student(int x,string y,char z){
    number=x;
    name=y;
    division=z;
}
void display(){
    cout<<"student number = "<<number<<endl;
    cout<<"student name = "<<name<<endl;
    cout<<"student division = "<<division<<"\n"<<endl;
}
};
int main(){
    
    student one = student(12,"AMMU",'A');
    student second=student(14,"APPU",'B');
    one.display();
    second.display();
    return 0;
}