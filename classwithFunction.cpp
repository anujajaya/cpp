#include <iostream>
using namespace std;
class car
{
    int type;

public:
    int number;
    string name;

    void carstype()
    {
        type = number + 1;
        cout << name << endl;
        cout << number << endl;
        cout << type << endl;
    }  
};
int main()
{
    car one, second;
    one.name = "audi";
    one.number = 654568;
    one.carstype();
    second.name = "volvo";
    second.number = 654568;
    second.carstype();
    return 0;
}