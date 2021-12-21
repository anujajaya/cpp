// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,temp;
//     cout<<"enter the values a&b"<<endl;
//     cin>>a>>b;
//      cout<<"value of a = "<<a<<"\t"<<"value of b = "<<b<<endl; 
//     temp=a;
//     a=b;
//     b=temp;
//     cout<<"values after swapping"<<"\n"<<"value of a = "<<a<<"\t"<<"value of b = "<<b<<endl; 
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter the values a&b"<<endl;
    cin>>a>>b;
     cout<<"value of a = "<<a<<"\t"<<"value of b = "<<b<<endl; 
    swap(a,b);
    cout<<"values after swapping"<<"\n"<<"value of a = "<<a<<"\t"<<"value of b = "<<b<<endl; 
    return 0;
}