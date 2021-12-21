#include<iostream>
using namespace std;
struct car{
char name[50];
int number;

};

int main(){
    car one;
    one.name[50]=london america;
    one.number=1234;
    cout<<"name = "<<one.name<<endl;
    cout<<"number = "<<one.number<<endl;
    return 0;
}