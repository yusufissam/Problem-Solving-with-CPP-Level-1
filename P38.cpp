#include<iostream>
#include<string>
#include<cmath>
using namespace std;

enum enPrimeNotPrime {Prime = 1, NotPrime = 2};

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

enPrimeNotPrime CheckPrime(int Number)
{
    int M = round(Number / 2);

    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimeNotPrime::NotPrime;
    }

    return enPrimeNotPrime::Prime;
}

void PrintNumberType(int Number)
{
    switch (CheckPrime(Number))
    {
        case enPrimeNotPrime::Prime:
            cout << "It is Prime Number";
            break;
        case enPrimeNotPrime::NotPrime:
            cout << "It is Not Prime Number";
            break;

    }
}

int main()
{

    PrintNumberType(ReadPositiveNumber("Please enter Positive Number? "));

    
    return 0;
}