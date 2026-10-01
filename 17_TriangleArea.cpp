#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void ReadNumbers(float& A, float& H)
{
    cout << "Please enter triangle base A? ";
    cin >> A;

    cout << "Please enter triangle heiht H? ";
    cin >> H;
}

float TiangleArea(float A, float H)
{
    float Area = (A * 0.5) * H;

    return Area;
}

void PrintResult(float Area)
{
    cout << "\ntriangle Area = " << Area << endl;
}

int main()
{
    float A, H;

    ReadNumbers(A, H);
    PrintResult(TiangleArea(A, H));

    return 0;
}
