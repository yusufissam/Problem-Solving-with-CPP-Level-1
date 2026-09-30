#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float ReadRedious()
{
    float R;

    cout << "Please enter redious R?" << endl;
    cin >> R;

    return R;
}

float CircleArea(float R)
{
    const float PI = 3.14159265;

    float Area = pow(R, 2) * PI;

    return Area;
}

void PrintResult(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}

int main()
{
    PrintResult(CircleArea(ReadRedious()));

    return 0;
}

// Youssef Essam

// 8 8 2026

// Algorithm Solutions Level 1