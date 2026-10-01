#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void ReadTriangleData(float& A, float& B, float& C)
{
    cout << "Please enter triangle side A? ";
    cin >> A;

    cout << "Please enter triangle base B? ";
    cin >> B;

    cout << "Please enter triangle side C? ";
    cin >> C;
}

float CircleAreaByATiangle(float A, float B, float& C)
{
    const float PI = 3.14159265;
    float P = (A + B + C) / 2;

    //float Area = PI * pow((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C))), 2); ----> It is my solve

    float T;
    T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

    float Area = PI * pow(T, 2);

    return Area;
}

void PrintResult(float Area)
{
    cout << "\nRectangle Area = " << Area << endl;
}

int main()
{
    float A, B, C;

    ReadTriangleData(A, B, C);
    PrintResult(CircleAreaByATiangle(A, B, C));

    return 0;
}

// Youssef Essam

// 9 8 2026

// Algorithm Solutions Level 1