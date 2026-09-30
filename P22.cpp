#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void ReadTriangleData(float& A, float& B)
{
    cout << "Please enter triangle side A? ";
    cin >> A;

    cout << "Please enter triangle base B? ";
    cin >> B;
}

float CircleAreaByITiangle(float A, float B)
{
    const float PI = 3.14159265;

    float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));

    return Area;
}

void PrintResult(float Area)
{
    cout << "\nRectangle Area = " << Area << endl;
}

int main()
{
    float A, B;

    ReadTriangleData(A, B);
    PrintResult(CircleAreaByITiangle(A, B));

    return 0;
}

// Youssef Essam

// 9 8 2026

// Algorithm Solutions Level 1