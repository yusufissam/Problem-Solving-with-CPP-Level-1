#include <iostream>
#include <string>

using namespace std;

int ReadNumber()
{
    int Number;

    cout << "Please enter a number?" << endl;
    cin >> Number;

    return Number;
}

void PrintRangeFrom1ToN_UsingWhile(int N)
{
    int Counter = 0;

    cout << "Range printed using While Statement: " << endl;

    while (Counter < N)
    {
        Counter ++;
        cout << Counter << endl;
    }
}

void PrintRangeFrom1ToN_UsingDoWhile(int N)
{
    int Counter = 0;

    cout << "Range printed using Do While Statement: " << endl;

    do
    {
        Counter ++;
        cout << Counter << endl;

    } while (Counter < N);
}

void PrintRangeFrom1ToN_UsingFor(int N)
{
    cout << "Range printed using For Statement: " << endl;

    for (int Counter = 1; Counter <= N; Counter ++)
    {
        cout << Counter << endl;        
    }
}

int main()
{
    int N = ReadNumber();

    PrintRangeFrom1ToN_UsingWhile(N);
    PrintRangeFrom1ToN_UsingDoWhile(N);
    PrintRangeFrom1ToN_UsingFor(N);

    return 0;
}

// Youssef Essam

// 9 8 2026

// Algorithm Solutions Level 1