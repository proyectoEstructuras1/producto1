#include <iostream>
#include<stdlib.h>
#include"Producto.h"
#include"listaP.h"
using namespace std;

bool menu(listaP& a);
void operaciones(listaP& a, int op);

int main(void)
{listaP q;
  /*Producto a("leche",3,12.12), b ("agua",1,12.1),c("ref",2,14.4),d("ref",4,14.4),e("ref",10,14.4),f("ref",9,14.4),g("ref",7,14.4),h("ref",3,14.4);

q.insertaNodo(a);
q.insertaNodo(b);
q.insertaNodo(e);
q.insertaNodo(c);
q.insertaNodo(d);
q.insertaNodo(f);
q.insertaNodo(g);
q.insertaNodo(h);
q.eliminaNodo(3);
q.muestraIniFin();*/
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
       <<"4.- Elimina un producto"<<endl
       <<"5.- Elimina la lista"<<endl
       <<"6.- Salir"<<endl
       <<"Cual es tu opcion?";
       cin>>op;
       system("cls");
       operaciones(a,op);

    return op!=6;

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
            a.buscaNodo();
            break;
        case 4:
            int b;
            cout<<"Que numero de producto desea eliminar:";
            cin>>b;
            a.eliminaNodo(b);
            cout<<"Producto eliminado..."<<endl;
            break;
        case 5:
            a.eliminaLista();
            break;
        case 6:
         cout<<"Adios! :v"<<endl<<endl;
            break;
        default:

            cout<<"opcion invalida...!"<<endl;
            break;
}

system("pause");
system("cls");



}
