#include<iostream>
using namespace std;
void hcffunction(){
    int hcf,n1,n2;
    
    cout<<"enter the value of the  n1"<<endl;
    cin>>n1;
    cout<<"enter the value of  the n2"<<endl;
    cin>>n2;
    for(int i=1;i<=n2;i++){
   if(n1%i==0   && n2%i==0){
  hcf=i;
   }
    }
    cout<<"hfc =  "<<hcf<<endl;
    
}
int main(){
    
    
    hcffunction();

    return 0;
}