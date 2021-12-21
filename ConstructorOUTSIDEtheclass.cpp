#include<iostream>
using namespace std;
class Car{
    public:
int number;
string name;
Car(int x,string y);
};
Car::Car(int x,string y){
 number=x;
 name=y;
}

int main(){
    Car one=Car(1234,"volvo");
    cout<<"car number = " <<one.number<<endl;
    cout<<"car name = " <<one.name<<endl;
    return 0;
}