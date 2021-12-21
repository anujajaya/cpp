#include <iostream>
#include <cmath>
using namespace std;
class student
{
public:
    long id;
    string name;
    student()
    {
        id = random();
        name="appu";
    }
};
int main()
{
    student s1, s2;
    cout << s1.id << "\t" << s2.id << endl;
    cout<<s1.name<<"\t"<<s2.name<<endl;
    return 0;
}

