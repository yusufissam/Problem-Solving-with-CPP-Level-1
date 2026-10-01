#include <iostream>
#include <string>

using namespace std;

struct stInfo
{
    int Age;
    bool Hasdrivinglicense; 
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please enter your age?" << endl;
    cin >> Info.Age;

    cout << "Do you have driver license?" << endl;
    cin >> Info.Hasdrivinglicense;

    return Info;
}

bool IsAccepted(stInfo Info)
{
    return (Info.Age > 21 && Info.Hasdrivinglicense);
}

void PrintResult(stInfo Info)
{
    if(IsAccepted(Info))
        cout << "\n Hired" << endl;
    else
        cout << "\n Rejected" << endl;
}

int main()
{

    PrintResult(ReadInfo());

    return 0;
}
