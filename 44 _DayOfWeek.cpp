#include<iostream>
#include<string>
using namespace std;


enum enDayOfWeek {Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7};

int ReadNumberInRange(string Massege, int from, int to)
{
    int Number;

    do
    {
        cout << Massege << endl;
        cin >> Number;

    } while  (Number < from || Number > to);

    return Number;
}

enDayOfWeek ReadDayOfWeek()
{
    string Massege = "Please Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7? ";

    return (enDayOfWeek)ReadNumberInRange(Massege, 1, 7);
};

string GetDayOfWeek(int Day)
{
    switch (Day)
    {
    case enDayOfWeek::Sat:
        return "Its Saturday";

    case enDayOfWeek::Sun:
        return "Its Sunday";
   
    case enDayOfWeek::Mon:
        return "Its Monday";

    case enDayOfWeek::Tue:
        return "Its Tueseday";

    case enDayOfWeek::Wed:
        return "Its Wednesday";

    case enDayOfWeek::Thu:
        return "Its Thursday";

    case enDayOfWeek::Fri:
        return "Its Friday";
        
    default:
        return "Wrong Day";
    }   
};

int main()
{

    cout << GetDayOfWeek(ReadDayOfWeek());
    
    return 0;
}