#include<iostream>
#include<string>
using namespace std;

struct strTaskDuration
{
    int NumberOfDayes, NumberOfHours, NumberOfMinuts, NumberOfSeconds;
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

strTaskDuration ReadTaskDuration()
{
    strTaskDuration TaskDuration;

    TaskDuration.NumberOfDayes = ReadPositiveNumber("Please enter Number of Dayes: ");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Please enter Number of Dayes: ");
    TaskDuration.NumberOfMinuts = ReadPositiveNumber("Please enter Number of Minuts: ");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please enter Number of Seconds: ");

    return TaskDuration;
}

int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
    int DurationInSeconds;

    DurationInSeconds = TaskDuration.NumberOfDayes * 24 * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfMinuts * 60;
    DurationInSeconds += TaskDuration.NumberOfSeconds;

    return DurationInSeconds;
}



int main()
{

    int result = TaskDurationInSeconds(ReadTaskDuration());

    cout << "\nTask Duration Seconds: " << result << endl;

    return 0;
}