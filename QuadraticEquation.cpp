#include<iostream>
#include<cmath>
using namespace std;
int main(){
 float a,b,c,d,r1,r2;
    cout<<"enter the value of a,b&c"<<endl;
    cin>>a>>b>>c;
   d=(b*b)-(4*a*c);
   if(d==0){
    r1=-b/(2*a);
    cout<<"root is"<<r1<<endl;
   }
   else if(d>0){
   r1=-b+(sqrt(d))/(2*a);
  r2=-b-(sqrt(d))/(2*a);
  cout<<"roots are"<<r1<<"\t"<<"and"<<r2<<endl;
   }
   else if(d<0){
 r1=-b-(sqrt(-d))/(2*a);
 r2=-b+(sqrt(-d))/(2*a);
 cout<<"root get"<<r1<<"\t"<<"and"<<r2<<endl;
   }
    return 0;
}