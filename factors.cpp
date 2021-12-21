#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
 if(n%i==0){
 cout<<"factors ="<<i<<endl;
 }
    }
    return 0;
}