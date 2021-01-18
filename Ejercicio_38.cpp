#include <iostream>
#include <conio.h>

using namespace std;

int EdadAGrupoEtario(int edad)
{
    if (edad <= 14)
    {
        return 1;
    }
    if (edad >= 15 && edad <= 21)
    {
        return 2;
    }
    if (edad >= 22 && edad <= 28)
    {
        return 3;
    }
    if (edad >= 29 && edad <= 35)
    {
        return 4;
    }
    if (edad >= 36 && edad <= 42)
    {
        return 5;
    }
    if (edad >= 43 && edad <= 49)
    {
        return 6;
    }
    if (edad >= 50 && edad <= 63)
    {
        return 7;
    }
    if (edad >= 63)
    {
        return 8;
    }
}

int main()
{
    cout << EdadAGrupoEtario(22) << endl;
    cout << EdadAGrupoEtario(68) << endl;
    cout << EdadAGrupoEtario(12) << endl;
    cout << EdadAGrupoEtario(39) << endl;

    getch();
    return 0;
};