#include <iostream>
#include <string>

using namespace std;

struct stInfo
{
    int Age;
    bool Hasdrivinglicense; 
    bool HasRecommendation; 
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please enter your age?" << endl;
    cin >> Info.Age;

    cout << "Do you have driver license?" << endl;
    cin >> Info.Hasdrivinglicense;

    cout << "Do you have recommendation?" << endl;
    cin >> Info.HasRecommendation;

    return Info;
}

bool IsAccepted(stInfo Info)
{
    if (Info.HasRecommendation)
    {
        return true;
    }
    else
    {
        return (Info.Age > 21 && Info.Hasdrivinglicense);
    }
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


// Youssef Essam

// 30 7 2026

// Algorithm Solutions Level 1