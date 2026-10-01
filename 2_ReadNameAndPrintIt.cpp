#include <iostream>
#include <string>

using namespace std;

string ReadName()
{
    string Name;

    cout << "Please enter your name? " << endl;
    getline(cin, Name);

    return Name;
}

void PrintName(string Name)
{

    cout << "\n Your name is : " << Name << endl;

}

int main()
{

    PrintName(ReadName());

    return 0;

}


// Youssef Essam

// 17 7 2026

// Algorithm Solutions Level 1