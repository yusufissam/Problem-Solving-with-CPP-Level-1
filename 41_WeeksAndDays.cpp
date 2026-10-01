#include<iostream>
#include<string>
using namespace std;

float ReadPositiveNumber(string Massege)
{
    float Number = 0;

    do
    {
        cout << Massege << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

float HourseToDayes(float NumberOfHourse)
{
    return (float)NumberOfHourse / 24;
}

float HourseToweeks(float NumberOfHourse)
{
  return (float)NumberOfHourse / 24 / 7;
}

float DayesToweeks(float NumberOfDayes)
{
  return (float)NumberOfDayes / 7;  
}


int main()
{
    float NumberOfHourse = ReadPositiveNumber("Please enter Number of Hourse? ");
    float NumbersOfDayes = HourseToDayes(NumberOfHourse);
    float NumbersOfweeks = HourseToDayes(NumbersOfDayes);

    cout << endl;
    cout << "Total Hourse = " << NumberOfHourse << endl;
    cout << "Total Dayes = " << NumbersOfDayes << endl;
    cout << "Total Weeks = " << NumbersOfweeks << endl;
    cout << "Total Weeks = " << HourseToweeks(NumberOfHourse) << endl; //by Hourse
    
    return 0;
}