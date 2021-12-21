// #include<iostream>
// using namespace std;
// int main(){
//     float c,f;
//     cout<<"enter the value of f"<<endl;
//     cin>>f;
//     c=(f-32)*5.0/9.0;
//     cout<<"temperature in celsius = "<<c<<endl;
//     return 0;
// }
#include<iostream>
using namespace std;
int temperature(double f){
      double c;
      c=(f-32.0)*5.0/9.0;
      return c;
}

int main(){
    double fah;
    cout<<"enter the value of f"<<endl;
    cin>>fah;
    cout<<"temperature in celsius = "<<temperature(fah)<<endl;
    return 0;
}