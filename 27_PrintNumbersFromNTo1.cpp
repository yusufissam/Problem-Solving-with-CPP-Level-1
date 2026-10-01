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
    int Counter = N + 1;

    cout << "Range printed using While Statement: " << endl;

    while (Counter > 1)
    {
        Counter --;
        cout << Counter << endl;
    }
}

void PrintRangeFrom1ToN_UsingDoWhile(int N)
{
    int Counter = N + 1;

    cout << "Range printed using Do While Statement: " << endl;

    do
    {
        Counter --;
        cout << Counter << endl;

    } while (Counter > 1);
}

void PrintRangeFrom1ToN_UsingFor(int N)
{
    cout << "Range printed using For Statement: " << endl;

    for (int Counter = N; Counter >= 1; Counter --)
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
