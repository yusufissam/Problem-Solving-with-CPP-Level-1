#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float ReadCircumference()
{
    float L;

    cout << "Please enter Circumference?" << endl;
    cin >> L;

    return L;
}

float CircleAreaByCircumference(float L)
{
    const float PI = 3.14159265;

    float Area = pow(L, 2) / (PI * 4);

    return Area;
}

void PrintResult(float Area)
{
    cout << "\nCircle Area = " << Area << endl;
}

int main()
{
    PrintResult(CircleAreaByCircumference(ReadCircumference()));

    return 0;
}
