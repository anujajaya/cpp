#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the three numbers"<<endl;
    cin>>a>>b>>c;
    if(a<b && a<c){
   cout<<"a is small"<<endl;
    }
    else if(b<a && b<c){
cout<<"b is small"<<endl;
    }
    else if(a==b && a==c){
cout<<"numbers are equal"<<endl;
    }
    else{
        cout<<"c is small"<<endl;
    }

    return 0;
}