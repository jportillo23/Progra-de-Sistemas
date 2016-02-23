#include <iostream>

using namespace std;

/* Generar 5 numero con un ciclo while, luego debera de contar los numeros que estan
en los rangos de 1-50, 51-100, 101
*/

int main()
{
    int c=0; int num; int c1=0; int c2=0; int c3=0; int mayor = 0; int menor=9999; double prom;
    while (c<5)
    {

        c++;
        cout << "Numero" <<c << ": ";
        cin >> num;

        if (num<menor)
        {
            menor=num;
        }

        if (num>mayor)
        {
           mayor=num;
        }

        if ((num>=0) and (num<51))
        {
            c1++;
        }
        else if ((num>50)and (num<101))
        {
            c2++;
        }
        else
        {
            c3++;
        }

    }


    cout <<"\n" <<"Numeros entre 1-50: " <<c1 <<"  Numeros entre 51-100: " <<c2 <<"  Numero mayor a 100: " <<c3 <<"\n";
    cout <<"Numero mayor: " <<mayor <<"   Numero menor: " <<menor <<"\n";
    cout <<"\n" "Final del ciclo \n";

    return 0;
}
