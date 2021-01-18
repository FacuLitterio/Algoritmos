#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

string Tendencia(int A, int B)
{
    if (B - A < 0)
    {
        return "Decreciente";
    }

    else if (B - A < A * 0.02)
    {
        return "Estable";
    }

    else if (B - A < A * 0.05)
    {
        return "Leve Ascenso";
    }

    else
    {
        return "En Ascenso";
    }
}

int main()
{

    cout << Tendencia(50, 100) << endl;
    cout << Tendencia(5, 1) << endl;
    cout << Tendencia(100, 2000) << endl;

    getch();
    return 0;
};