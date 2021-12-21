#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(n%4==0 && n%400==0){
   cout<<"its leap year"<<endl;
    }
    else{
        cout<<"its not leap year"<<endl;
    }
    return 0;
}