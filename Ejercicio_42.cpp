#include <iostream>
#include <conio.h>

using namespace std;

struct InfoCenso
{
    int DiaNacimiento;
    int MesNacimiento;
    int AnoNacimiento;
    char Sexo;
};

int main()
{
    InfoCenso Censos[100];
    int CantidadDePersonas = 0, NacimientosMesOctubre = 0, NacimientosAntesDe = 0;

    for (int i = 0; i < 100; i++)
    {
        cout << "Ingrese Dia de Nacimiento: ";
        cin >> Censos[i].DiaNacimiento;
        if (Censos[i].DiaNacimiento == 0)
        {
            break;
        }
        cout << "Ingrese Mes de Nacimiento: ";
        cin >> Censos[i].MesNacimiento;
        cout << "Ingrese Ano de Nacimiento: ";
        cin >> Censos[i].AnoNacimiento;
        cout << "Ingrese Sexo: ";
        cin >> Censos[i].Sexo;

        CantidadDePersonas++;
        cout << endl;
    }

    for (int i = 0; i < CantidadDePersonas; i++)
    {
        if (Censos[i].MesNacimiento == 10)
        {
            NacimientosMesOctubre++;
        }

        if (Censos[i].AnoNacimiento < 1990)
        {
            NacimientosAntesDe++;
        }
        else if (Censos[i].AnoNacimiento == 1990)
        {
            if (Censos[i].MesNacimiento < 7)
            {
                NacimientosAntesDe++;
            }
            else if (Censos[i].MesNacimiento == 7)
            {
                if (Censos[i].DiaNacimiento < 9)
                {
                    NacimientosAntesDe++;
                }
            }
        }
    }

    cout << endl;
    cout << "Nacimientos en el Mes de Octubre: " << NacimientosMesOctubre << endl;
    cout << "Nacimientos antes del 9 de Julio de 1990: " << NacimientosAntesDe << endl;

    getch();
    return 0;
};