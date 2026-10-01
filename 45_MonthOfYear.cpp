#include<iostream>
#include<string>
using namespace std;


enum enMonthOfYear {Jan = 1, Feb = 2, March = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12};

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
enMonthOfYear ReadMonthOfYear()
{
    string Massege = "Please enter a Month [1 to 12]";

    return (enMonthOfYear)ReadNumberInRange(Massege, 1, 12);
};

string GetMonthOfYear(int Number)
{
    switch (Number)
    {
    case enMonthOfYear::Jan:
        return "Its January";

    case enMonthOfYear::Feb:
        return "Its February";

    case enMonthOfYear::March:       
        return "Its March";

    case enMonthOfYear::Apr:         
        return "Its April";

    case enMonthOfYear::May:
        return "Its May";

    case enMonthOfYear::Jun:
        return "Its June";

    case enMonthOfYear::Jul:
        return "Its July";

    case enMonthOfYear::Aug:
        return "Its August";

    case enMonthOfYear::Sep:
        return "Its September";

    case enMonthOfYear::Oct:
        return "Its October";

    case enMonthOfYear::Nov:
        return "Its November";

    case enMonthOfYear::Dec:
        return "Its December";

    default:
        return "Wrong Month";
    }

};

int main()
{

    cout << GetMonthOfYear(ReadMonthOfYear());
    
    return 0;
}