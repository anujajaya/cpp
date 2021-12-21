#include<iostream>
using namespace std;
int main(){
    int a,b,sum=0,num;
    cout<<"enter value of a = "<<endl;
    cin>>a;
    num=a;
    while(a!=0){
    b=a%10;
    sum=(sum*10)+b;
    a=a/10;
    
    }
    cout<<"reverse number = "<<sum<<endl; 
    return 0;
}