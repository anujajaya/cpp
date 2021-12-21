#include<iostream>
using namespace std;
class car{
 public:
 string brand;
 int number;
 car(string x,int y){
  brand=x;
  number=y;
 }
};
int main(){
    
    car first("ford",1234);
   cout<<first.brand<<endl;
   cout<<first.number<<endl;
    return 0;
}