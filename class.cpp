#include<iostream>
using namespace std;
class cars{
    public:
string name;
long number;
char a;
};
int main(){
    cars first;
    first.name ="FORD";
    first.number =102030;
    first.a ='h';
    
    cout<<first.name<<endl;
    cout<<first.number<<endl;
    cout<<first.a<<endl;
    
    return 0;
}