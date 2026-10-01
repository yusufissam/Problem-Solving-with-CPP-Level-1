#include<iostream>
using namespace std;


struct stPiggyBankContent
{
    int penneis, nickels, dimes, quarters, dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{
    stPiggyBankContent PiggyBankContent;

    cout << "Please enter a Total Pennies? " << endl;
    cin >> PiggyBankContent.penneis;

    cout << "Please enter a Total Nickrles? " << endl;
    cin >> PiggyBankContent.nickels;

    cout << "Please enter a Total Dimes? " << endl;
    cin >> PiggyBankContent.dimes;

    cout << "Please enter a Total Quarters? " << endl;
    cin >> PiggyBankContent.quarters;

    cout << "Please enter a Total Dollars? " << endl;
    cin >> PiggyBankContent.dollars;

    return PiggyBankContent;
}

int CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
    int TotalPennies = 0;

    TotalPennies = PiggyBankContent.penneis * 1 + PiggyBankContent.nickels * 5 + PiggyBankContent.dimes * 10 + PiggyBankContent.quarters * 25 + PiggyBankContent.dollars * 100;

    return TotalPennies;
}

int main()
{
    int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());

    cout << "Total Prnnirs = " << TotalPennies << endl;
    cout << "Tota; Dollars = " << (float)TotalPennies / 100 << endl;
}