#include <iostream>
#include <string>

using namespace std;

int ReadNumberInRange(int from, int to)
{
    int grade;

    do
    {
        cout << "Please enter a Grade between 0 and 100?" << endl;

        cin >> grade;

    } while  (grade < from || grade > to);

    return grade;
}

char GetGradeLetter(int grade)
{

    if (grade >= 90)
    {
        return 'A';
    }
    else if (grade >= 80)
    {
        return 'B';
    }
    else if (grade >= 70)
    {
        return 'C';
    }
    else if (grade >= 60)
    {
        return 'D';
    }
    else if (grade >= 50)
    {
        return 'E';
    }
    else
    {
        return 'F';
    }

}


int main()
{

    char result = GetGradeLetter(ReadNumberInRange(0, 100));

    cout << "Result: " << result << endl;

    return 0;

}