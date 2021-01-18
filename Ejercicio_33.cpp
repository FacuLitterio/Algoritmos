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

int main()
{

    cout << MaximoComunDivisor(10, 5) << endl;
    cout << MaximoComunDivisor(20, 3) << endl;
    cout << MaximoComunDivisor(7, 5) << endl;
    cout << MaximoComunDivisor(20, 80) << endl;

    getch();
    return 0;
};