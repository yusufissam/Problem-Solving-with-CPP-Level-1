#include<iostream>
#include<string>
using namespace std;


 float  ReadNumber(string Massege)
{
    float Number = 0;

    cout << Massege << endl;
    cin >> Number;

    return Number;
}

float SumNumbers()
{
    int Sum = 0, Number = 0, Counter = 1;

    do
    {
        Number = ReadNumber("Please enter Number " + to_string(Counter));

        if (Number == -99)
        {
            break;
        }

        Sum += Number;
        Counter++;

    } while (Number != -99);

    return Sum;
    
}


int main()
{
    cout << "Result = " << SumNumbers() << endl;
    
    return 0;
}