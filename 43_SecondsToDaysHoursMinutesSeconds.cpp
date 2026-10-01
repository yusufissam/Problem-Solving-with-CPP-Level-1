#include<iostream>
#include<string>

using namespace std;

struct strTaskDuration
{
    int NumberOfDayes, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Massege)
{
    float Number = 0;

    do
    {
        cout << Massege << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
    strTaskDuration TaskDuration;

    const int SecondsPerDay = 24 * 60 * 60;
    const int SecondsPerHour = 60 * 60;
    const int SecondsPerMinute = 60;


    int Remainder;

    TaskDuration.NumberOfDayes = (TotalSeconds / SecondsPerDay);
    Remainder = TotalSeconds % SecondsPerDay;
    TaskDuration.NumberOfHours = (Remainder / SecondsPerHour);
    Remainder = Remainder % SecondsPerHour;
    TaskDuration.NumberOfMinutes = (Remainder / SecondsPerMinute);
    Remainder = Remainder % SecondsPerMinute;
    TaskDuration.NumberOfSeconds = Remainder;

    return TaskDuration;
}

void PrintTaskDurationDetails(strTaskDuration TaskDuration)
{
    cout << "\n";
    cout << TaskDuration.NumberOfDayes << " : " << TaskDuration.NumberOfHours << " : " << TaskDuration.NumberOfMinutes << " : " << TaskDuration.NumberOfSeconds << endl;
}


int main()
{

    int TotalSeconds = ReadPositiveNumber("Please enter Number of Seconds");

    PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));

    return 0;
}