#include <iostream>
#include <conio.h>

using namespace std;

float CalcularPorcentajeDiferencia(int A, int B)
{
    if (A + B == 0)
    {
        return 0;
    }
    else
    {
        return (B - A) * 100 / (A + B);
    }
}

int main()
{
    cout << CalcularPorcentajeDiferencia(1, 2) << endl;

    getch();
    return 0;
};