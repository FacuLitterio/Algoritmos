#include <iostream>
#include <conio.h>

using namespace std;

int MaximoComunDivisor(int A, int B)
{
    float Resto = A % B;
    if (Resto == 0)
    {
        return B;
    }
    else
    {
        MaximoComunDivisor(B, Resto);
    }
}

void Simplificacion(int X, int Y)
{

    int MCD = MaximoComunDivisor(X, Y);

    if (MCD == 1)
    {
        cout << X << "/" << Y << endl;
    }
    else
    {
        Simplificacion(X / MCD, Y / MCD);
    }
}

int main()
{
    Simplificacion(10, 5);
    Simplificacion(3, 5);
    Simplificacion(7, 7);
    Simplificacion(15, 20);

    getch();
    return 0;
};