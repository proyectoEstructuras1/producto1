#include <iostream>
#include<string>
#include<stdlib.h>
#include"Producto.h"
#include"listaP.h"
using namespace std;

bool menu(listaP& a);
void operaciones(listaP& a, int op);

int main(void)
{listaP q;
while(menu(q));

    return 0;
}
bool menu(listaP& a)
{
   int op;
   system ("cls");

   cout<<"1.- Inserta un producto"<<endl
       <<"2.- Muestra la lista"<<endl
       <<"3.- Busca un producto"<<endl
       <<"4.- Carga lista"<<endl
       <<"5.- Guarda lista"<<endl
       <<"6.- Elimina un producto"<<endl
       <<"7.- Elimina la lista"<<endl
       <<"8.- Salir"<<endl
       <<"Cual es tu opcion?";
       cin>>op;
       string enter;
       getline(cin,enter);
       system("cls");
       operaciones(a,op);

    return op!=8;

}
void operaciones(listaP& a, int op)
{
    Producto p;
switch(op)
{
        case 1:

            cout<<"Inserta producto:"<<endl;

            p.pideDatos();
            a.insertaNodo(p);
           break;
        case 2:
            cout<<"Esta es la lista:"<<endl;
            a.muestraIniFin();
            break;
        case 3:
            if(!a.buscaNodo())
                cout <<"no se encontro el producto"<<endl;
            break;
        case 4:

            a.cargaLista();
                cout<<"lista cargada"<<endl;
            break;
        case 5:

            a.guardaLista();
                cout<<"Lista guardada"<<endl;
            break;
        case 6:
            int b;
            cout<<"Que numero de producto desea eliminar:";
            cin>>b;

            if(a.eliminaNodo(b))
            cout<<"Producto eliminado..."<<endl;
            else
                cout<<"no se encontro el producto"<<endl;
            break;
        case 7:
            a.eliminaLista();
            break;
        case 8:
         cout<<"Adios! :v"<<endl<<endl;
            break;
        default:

            cout<<"opcion invalida...!"<<endl;
            break;
}

system("pause");
system("cls");



}
