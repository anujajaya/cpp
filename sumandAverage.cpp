#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    float average;
    cout<<"enter the limit"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
    sum+=i;
    }
    cout<<"sum = "<<sum<<endl;
    average=sum/n;
    cout<<"average = "<<average<<endl;
    return 0;
}