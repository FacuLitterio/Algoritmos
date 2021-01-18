#include <iostream>
#include <conio.h>

using namespace std;

int Factorial(int X)
{

    int Fact;

    if (X == 0 || X == 1)
    {
        Fact = 1;
        return Fact;
    }
    else
    {
        Fact = X * Factorial(X - 1);
    }
}

int main()
{

    cout << Factorial(0) << endl;
    cout << Factorial(1) << endl;
    cout << Factorial(2) << endl;
    cout << Factorial(3) << endl;
    cout << Factorial(4) << endl;
    cout << Factorial(5) << endl;

    getch();
    return 0;
};