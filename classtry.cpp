// #include <iostream>
// using namespace std;
// class movie
// {
// public:
//     int year;
//     string actor, actress;
//     char rate;
// };
// int main()
// {
//     movie doctor;
//     doctor.year = 2021;
//     doctor.actor = "Sivakarthikeyan";
//     doctor.actress = "Jonitha";
//     cout << "release year of Doctor is " << doctor.year << endl;
//     cout << "actor of Doctor is " << doctor.actor << endl;
//     cout << "actress name of Doctor is " << doctor.actress << endl;
//     return 0;
// }



#include <iostream>
using namespace std;
class movie
{
    int nextyear;

public:
    int year;
    string actor;
    void movieDetails()
    {
        nextyear = year + 1;
        cout << "vjijaysuperumpournamiyum movie release year " << year << endl;
        cout << "vjijaysuperumpournamiyum movie actor name" << actor << endl;
        cout << "next year = " << nextyear << endl;
    }
};
int main()
{
    movie vsp;
    vsp.year = 2020;
    vsp.actor = "ASifAli";
    vsp.movieDetails();
    return 0;
}


// #include <iostream>
// using namespace std;
// class movie
// {
//     int lastyear;

// public:
//     int year;
//     string actor, actress;
//     void moviedetails(int a, string b, string c)
//     {
//         year = a;
//         actor = b;
//         actress = c;
//     }
//     void getmovie()
//     {
//         lastyear = year - 1;
//         cout << "vellam movie release year "
//              << "\t" << year << endl;
//         cout << "actor name of vellam movie"
//              << "\t" << actor << endl;
//         cout << "actress name of vellam moive "
//              << "\t" << actress << endl;
//         cout << "previous year"
//              << "\t" << lastyear << endl;
//     }
// };
// int main()
// {
//     movie vellam;
//     vellam.moviedetails(2021, "Jayasurya", "samyuktha");
//     vellam.getmovie();
//     return 0;
// }