#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Please enter your Number 1 ? " << endl;
    cin >> Mark1;

    cout << "Please enter your Number 2 ? " << endl;
    cin >> Mark2;

    cout << "Please enter your Number 3 ? " << endl;
    cin >> Mark3;
}

int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3; 
}

float calculateAverage(int Mark1, int Mark2, int Mark3)
{
    return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

void PrintResults(int Average)
{
    cout << "\n The Average is: " << Average << endl;
}

int main()
{
    int Mark1, Mark2, Mark3;
    ReadNumbers(Mark1, Mark2, Mark3);
    PrintResults(calculateAverage(Mark1, Mark2, Mark3));

    return 0;
} 

// Youssef Essam

// 2 8 2026

// Algorithm Solutions Level 1
