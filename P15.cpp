#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(float& A, float& B)
{
    cout << "Please enter rectangle width A? ";
    cin >> A;

    cout << "Please enter rectangle length B? ";
    cin >> B;
}

float CalculateRectangleArea(float A, float B)
{
    return A * B;
}

void PrintResult(float Area)
{
    cout << "\nRectangle Area = " << Area << endl;
}

int main()
{
    float A, B;

    ReadNumbers(A, B);
    PrintResult(CalculateRectangleArea(A, B));

    return 0;
}

// Youssef Essam

// 5 8 2026

// Algorithm Solutions Level 1