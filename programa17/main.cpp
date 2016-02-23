#include <iostream>

using namespace std;

int main()
{
   int tabla;
   char resp;
   int i;
   do
{
    cout<<"tabla de multiplicar....:";
   cin<<tabla;

}   while((tabla<5) or (tabla>10));

   for(i=1;i<=10;i++)
   {
       resp=tabla * i;
       cout<<i<<" X "<<tabla<<" = "<<resp<<"\n";
   }
   _flushall();

   do

    {

    cout<<"desea continuar....:";
    cin.get(resp);
    _flushall();
    }  while(toupper(resp) !='S' and (toupper(resp) !='N'));
}while(toupper(resp) =='S')

    return 0;
}
