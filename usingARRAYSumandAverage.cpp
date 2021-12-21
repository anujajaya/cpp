#include <iostream>
using namespace std;
int main()
{
    int n, sum=0, i, a[10];
    float average = 0;
    cout << "enter the limit" << endl;
    cin >> n;
    cout << "enter the numbers" << endl;
    for (int i = 0; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i <= n; i++)
    {
        sum += a[i];
    }
    average = sum / n;
    cout << "sum = " << sum << "average = " << average << endl;
    return 0;
}