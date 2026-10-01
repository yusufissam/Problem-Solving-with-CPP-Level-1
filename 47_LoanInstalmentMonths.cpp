#include<iostream>
#include<string>
using namespace std;

int ReadPositiveNumber(string Massege)
{
    float Number = 0;

    do
    {
        cout << Massege << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
    return LoanAmount / MonthlyInstallment;
}


int main()
{
    float LoanAmount = ReadPositiveNumber("Please enter Loan Amount? ");
    float MonthlyInstallment = ReadPositiveNumber("Please enter Monthly Install? ");

    cout << "\nTotal Minths to pay = " << TotalMonths(LoanAmount, MonthlyInstallment);
    
    return 0;
}