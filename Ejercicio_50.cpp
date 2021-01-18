#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int DeHorasAMinutos(int HHMM)
{
    int Minutos = HHMM % 100;
    int Horas = (HHMM - Minutos) / 100;

    int TotalMinutos = (Horas * 60) + Minutos;

    return TotalMinutos;
}

int main()
{
    cout << DeHorasAMinutos(1534) << endl;

    getch();
    return 0;
};