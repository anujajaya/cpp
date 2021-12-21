#include<iostream>
using namespace std;
int temperature(){
    int c,f;
    cout<<"enter farhenheat"<<endl;
    cin>>f;
    c=(f-32)*5/9;
    cout<<"temperature = "<<c<<endl;
    return 0;
}

int main(){
temperature();
return 0;
}