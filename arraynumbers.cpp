#include <iostream>
using namespace std;
int main()
{
    int num[11],i,j,n1,n2,flag=2;
    for(i=0;i<=10;i++){
        cout << "enter number for position " << i << endl;
        cin >> num[i];
        cout << "position :" << i << "\t"
             << "value :" << num[i] << "\n"
             << endl;
    }
    while(flag==2){
    cout<<"enter the index"<<endl;
    cin>>n1;
    cout<<"enter the change"<<endl;
  cin>>n2;
  num[n1]=n2;
  for(int j=0;j<=10;j++){
   cout<<"position ="<<j<<"value ="<<num[j]<<endl;
  }
   cout<<"do you want to try again"<<endl;
   cin>>flag;
  
    }
    return 0;
}