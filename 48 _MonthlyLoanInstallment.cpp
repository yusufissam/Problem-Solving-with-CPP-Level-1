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

float TotalMonths(float LoanAmount, float HowManyMonths)
{
    return LoanAmount / HowManyMonths;
}


int main()
{
    float LoanAmount = ReadPositiveNumber("Please enter Loan Amount? ");
    float HowManyMonths = ReadPositiveNumber("HowManyMonths? ");

    cout << "\nMonthly Installment = " << TotalMonths(LoanAmount, HowManyMonths);
    
    return 0;
}