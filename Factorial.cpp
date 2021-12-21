#include <iostream>
using namespace std;
int main()
{
    int i,  limit;
    int fact = 1;
    cout << "enter the limit" << endl;
    cin >> limit;
    for (int i = 1; i <= limit; i++)
    { 
        
            fact = fact * i;
    
        
    }
       cout << "factorial " << limit << " = " << fact << endl; 
        

        
    return 0;
}

// #include<iostream>
// using namespace std;
// int function(int limit){
//     int i,fact=1;
    
// for(int i=1;i<=limit;i++){
// fact=fact*i;
// }
//     return fact;

// }
// int fa;
// int main(){
// cout<<"enter"<<endl;
// cin>>fa;
// cout<<"factorial = "<<function(fa)<<endl;
// return 0;
// }
