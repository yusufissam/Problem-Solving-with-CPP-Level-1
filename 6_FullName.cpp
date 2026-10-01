#include <iostream>
#include <string>

using namespace std;

struct stInfo
{
    string FierstName;
    string LasttName;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please enter your First Name?" << endl;
    cin >> Info.FierstName;
    
    cout << "Please enter your Last Name?" << endl;
    cin >> Info.LasttName;

    return Info;
}

string GetFullName(stInfo Info, bool Reversed)
{
    string FullName;

    if(Reversed)
        FullName = Info.LasttName + " " + Info.FierstName;
    else
        FullName = Info.FierstName + " " + Info.LasttName;
    
    return FullName;
}

void PrintFullName(string FullName)
{
    cout << "\n Your Full Name is: " << FullName << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadInfo(), true));

    return 0;
}
