// #include <iostream>
// using namespace std;
// int factorial(int);

// int main()
// {
//     factorial();
//     return 0;
// }
// int factorial()
// {
//     int n, result;
//     cout << "enter the number" << endl;
//     cin >> n;
//     if (n > 1)
//     {
//         result = n * factorial(n - 1);
//     }
//     cout << "factorial of " << n << " = " << result << endl;
// }

#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}