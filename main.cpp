#include <iostream>
#include<stdlib.h>
#include"Producto.h"
#include"ArbolP.h"
using namespace std;

bool menu(ArbolP& a);
void operaciones(ArbolP& a, int op);

int main(void)
{ArbolP q;

while(menu(q));

    return 0;
}
bool menu(ArbolP& a)
{
   int op;
   system ("cls");

   cout<<"1.- Inserta un producto"<<endl
       <<"2.- Muestra la lista en pre orden"<<endl
       <<"3.- Muestra la lista en in orden"<<endl
       <<"4.- Muestra la lista en pos orden"<<endl
       <<"5.- Busca un producto"<<endl
       <<"6.- Nodos en el arbol"<<endl
       <<"7.- Profundidad del arbol"<<endl
       <<"8.- Elimina sub arbol"<<endl
       <<"9.- Elimina un producto"<<endl
       <<"10.- Elimina el arbol "<<endl
       <<"11.- Salir"<<endl
       <<"Cual es tu opcion?";
       cin>>op;
       string enter;
       getline(cin,enter);
       system("cls");
       operaciones(a,op);

    return op!=11;

}
void operaciones(ArbolP& a, int op)
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
            cout<<"Esta es el arbol en pre orden"<<endl;
            a.muestraPre();
            break;
        case 3:
            cout<<"Esta es el arbol en in orden"<<endl;
            a.muestraIn();
            break;
        case 4:
            cout<<"Esta es el arbol en pos orden"<<endl;
            a.muestraPos();
            break;
        case 5:
            int d;
            cout<<"numero de producto:";cin>>d;
            a.buscaNodo(d);
            break;
        case 6:
            cout<<"Estos son los nodos en el arbol: ";
            cout<<a.cuentaNodos()<<endl;
            break;
        case 7:
            cout<<"Esta es la profundidad del arbol: ";
            cout<<a.profundidadDelArbol()<<endl;
            break;
        case 8:
            int s;
            cout<<"apartir de que dato desea eliminar:";cin>>s;
            a.eliminaSubarbol(s);
            break;
        case 9:
            int b;
            cout<<"Que numero de producto desea eliminar:";
            cin>>b;
            a.eliminaNodo(b);
            cout<<"Producto eliminado..."<<endl;
            break;
        case 10:
            a.eliminaArbol();
            break;
        case 11:
         cout<<"Adios! :v"<<endl<<endl;
            break;
        default:

            cout<<"opcion invalida...!"<<endl;
            break;
}

system("pause");
system("cls");



}
