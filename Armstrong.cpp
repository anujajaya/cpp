#include<iostream>
using namespace std;
int main(){
    int a,b,num,result=0;
    cout<<"enter the numbers"<<endl;
    cin>>a;
    num=a;
    while(a!=0){
      b=a%10;
      result=result+b*b*b;
      a=a/10;
      cout<<result<<endl;
    }
    if(num==result){
    cout<<"number is armstrong"<<endl;
    }
    else{
        cout<<"number is not armstrong"<<endl;
    }
    
    return 0;
}