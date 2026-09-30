#include<iostream>
using namespace std;



int ReadTotalSales()
{
    int TotalSales;

    cout << "Please enter total Sales? " << endl;
    cin >> TotalSales;

    return TotalSales;
}


float GetComissinPercentage(float TotalSales)
{
    if (TotalSales >= 1000000)
    {
        return 0.01;
    }
    else if (TotalSales >= 500000)
    {
        return 0.02;
    }
    else if (TotalSales >= 100000)
    {
        return 0.03;
    }
    else if (TotalSales >= 50000)
    {
        return 0.04;
    }
    else
    {
        return 0.05;
    }
}

float CalculateTotalComissin(float TotalSales)
{
    return GetComissinPercentage(TotalSales) * TotalSales;
}


int main()
{

    float TotalSales = ReadTotalSales();
    
    cout << "Comissin Percentage = " << GetComissinPercentage(TotalSales) << endl;
    cout << "Total Comissin = " << CalculateTotalComissin(TotalSales) << endl;

    return 0;
}