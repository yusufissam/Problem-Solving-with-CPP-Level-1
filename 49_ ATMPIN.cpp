#include<iostream>
#include<string>
using namespace std;

string ReadPinCode()
{
    string PinCode;
    cout << "Please enter PIN Code? \n";
    cin >> PinCode;

    return PinCode;
}

bool Login()
{
    string PinCode;

    do
    {
        PinCode = ReadPinCode();

        if (PinCode == "1234")
        {
            return 1;   
        }
        else
        {
            cout << "\n Wrong PIN\n";
            system("Color 4F");
        }

    } while(PinCode != "1234");
    
    return 0;
}

int main()
{
    if (Login())
    {
        system("color 2F");
        cout << "\nYour account balance is " << 7500 << endl;
    }

    
    return 0;
}