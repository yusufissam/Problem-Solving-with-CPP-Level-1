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

float TotaBillAfterServiceAndTax(float TotalBill)
{
    TotalBill = TotalBill * 1.1;
    TotalBill = TotalBill * 1.16;

    return TotalBill;
}

int main()
{

    float TotalBill = ReadPositiveNumber("Please enter Total Bill: ");

    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Bill After Service Fee and Sales Tax = " << TotaBillAfterServiceAndTax(TotalBill) << endl;
    
    return 0;
}