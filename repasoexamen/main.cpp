#include <iostream>

using namespace std;

int turno;
char nombre[30];
double ventas,pcomis,comis;
void ingresoDatos(char nombre[],double &ventas,int turno)
    {
        cout<<"nombre...:";
        cin.getline(nombre,45);
        cout<<"ventas...";
        cin>>ventas;
        do
        {
            cout<<"Ingresar turno.....:";
            cin>>turno;
        }while(!((turno>=1)and (turno<=3)));



    }
    double porcomis(int turno)
    {
        if (turno==1)
        {return 0.05;}
        else if (turno==3)
        {return 0.06;}
        else
        {return 0.04; }
    }
    void calcular (int turno,double ventas,double &promis, double &comis)
    {
        pcomis= porcomis(turno);
        comis= ventas * pcomis;
    }

    int main()
    {
        ingresoDatos(nombre,ventas,turno);
        calcular(turno,ventas,pcomis,comis);
        cout<<"Por. De comision..."<<pcomis<<"\n";
        cout<<"comision Ganada..."<<comis<<"\n";

        return 0;
    }

