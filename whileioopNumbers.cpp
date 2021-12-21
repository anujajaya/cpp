// #include <iostream>
// using namespace std;
// int main()
// {
//   int a;

//   cout << "enter the number : " << endl;
//   cin >> a;
//   // cout << "enter the value: " << endl;
//   // cin >> b;
//   while (a <= 100)
//   {
//     if (a >=15  && a <= 75)
//     {
//       cout << a << endl;
//     }

//     a++;
//   }

//   return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//   int a=0,b,i;
//   cout<<"enter"<<endl;
//   cin>>b;
//   for(int i=0;i<=b;i++){
// cout<<" total valuev = "<<i<<endl;
//   }

//   while(a<=100){
//   if(a>=15){
//   while(a<=75){
//   cout<<a<<endl;
//   a++;
//   }
//   }
//   a++;
//   }

//   return 0;
// }
#include <iostream>
using namespace std;
int main()
{
  int a, b;
  cout << "enter the   a" << endl;
  cin >> a;
  cout << "enter the value b" << endl;
  cin >> b;
  while (a <= 100)
  {
    if (!(a>=30 && a<=60) && !(a>=90 &&a<=100))
    {
      cout << a << endl;
    }
    a++;
  }
  return 0;
}