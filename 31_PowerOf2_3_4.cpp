#include <iostream>
#include <string>

using namespace std;

int ReadNumber()
{
    int Number;

    cout << "Please enter a number? " << endl;
    cin >> Number;

    return Number;
}

void PowerOf2_3_4(int Number)
{
    cout << Number * Number << endl;
    cout << Number * Number * Number << endl;
    cout << Number * Number * Number * Number << endl;
}

int main()
{

    PowerOf2_3_4(ReadNumber());

    return 0;
}