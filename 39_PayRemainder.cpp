#include<iostream>
#include<string>
using namespace std;

float ReadPositiveNumber(string Massege)
{
    float Number = 0;

    do
    {
        cout << Massege << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

float CalculateReminder(float TotalBill, float TotalCashPaid)
{
    float Reminder = TotalCashPaid - TotalBill;

    return Reminder;
}

int main()
{

    float TotalBill = ReadPositiveNumber("Please enter Total Bill: ");
    float TotalCashPaid = ReadPositiveNumber("Please enter Total Cash Paid: ");

    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Cash Paid = " << TotalCashPaid << endl;

    cout << "@====================================@\n";

    cout << "\nReminder = " << CalculateReminder(TotalBill, TotalCashPaid) << endl;
    
    return 0;
}