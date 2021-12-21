#include<iostream>
using namespace std;
int main(){
    int a,b,addi,mult,subt;
    float divi;
    cout<<"enter the value of a & b"<<endl;
    cin>>a >> b;
    addi=a+b;
    subt=a-b;
    mult=a*b;
    divi=(float)a/b;
    cout<<"addition = "<<addi<<" \n"<<"subtraction = "<<subt
    <<"\n"<<"multiplication = "<<mult<<"\n"<<"division = "<<divi<<endl;
    return 0;
}   