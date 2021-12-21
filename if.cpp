#include <iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"enter mark:"<<endl;
    cin>>mark;
    if(mark>=90){
cout<<"A"<<endl;
    }
    else if(mark>=80){
        cout<<"B"<<endl;
    }
    else if(mark>=70){
        cout<<"C"<<endl;
    }
    else if(mark>=60){
cout<<"D"<<endl;
    }
    else{cout<<"fail"<<endl;}
    return 0;
}