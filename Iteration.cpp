#include<iostream>
using namespace std;
int main(){
    int a,b;
    int num;
    cout<<"enter the value  : "<<endl;
    cin>>a;
    while(a!=0){
b=a%10;
a=a/10;
cout<<"value of b = "<<b<<endl;
    }
    return 0;
}