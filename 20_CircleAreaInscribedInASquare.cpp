#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float ReadSquareSide()
{
    float A;

    cout << "Please enter square side A?" << endl;
    cin >> A;

    return A;
}

float CircleAreaInscribedInSquare(float A)
{
    const float PI = 3.14159265;

    float Area = (pow(A, 2) * PI) / 4;

    return Area;
}

void PrintResult(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}

int main()
{
    PrintResult(CircleAreaInscribedInSquare(ReadSquareSide()));

    return 0;
}

// Youssef Essam

// 8 8 2026

// Algorithm Solutions Level 1