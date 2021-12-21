#include<iostream>
using namespace std;
int main(){
    int a,b,num,sum=0;
    cout<<"enter value of a"<<endl;
    cin>>a;
    num=a;
    cout<<"value of num = "<<num<<endl;
    while(a!=0){
    b=a%10;
    sum=(sum*10)+b;
    a=a/10;
    cout<<"value of sum = "<<sum<<endl;
    }
    if(num==sum){
 cout<<"number is palindrome"<<endl;
    }
    else{
        cout<<"number is not palindrome"<<endl;
    }
    return 0;
}

// #include<iostream>
// using namespace std;
// int palindrome(int a){
//     int b,num,sum=0;
//     num=a;
//     while(a!=0){
//      b=a%10;
//      sum=(sum*10)+b;
//      a=a/10;
//     }
//     if(num==sum){
// cout<<"number is palindrome"<<endl;
//     }
// else{
//     cout<<"number is not palindrome"<<endl;
// }
//   return sum;  
// }

// int main(){
// int as;
// cout<<" enter the value of a"<<endl;
// cin>>as;
// cout<<"values"<<palindrome(as)<<endl;
// }