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
    int Counter = 3;
    do
    {
        Counter --;
        PinCode = ReadPinCode();

        if (PinCode == "1234")
        {
            return 1;   
        }
        else
        {
            cout << "\n Wrong PIN, you have " << Counter << " more tries" << endl;
            system("Color 4F");
        }

    } while(Counter >= 1 && PinCode != "1234");
    
    return 0;
}

int main()
{
    if (Login())
    {
        system("color 2F");
        cout << "\nYour account balance is " << 7500 << endl;
    }
    else
    {
        cout << "\nYour card blocked call the bank for help. \n";
    }

    
    return 0;
}