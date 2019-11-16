#include "Producto.h"

Producto::Producto(void)
{
Nombre="";
numero=0;
precio=0.0;



}
Producto::Producto(string N, int n, float p)
{
this->Nombre=N;
this->numero=n;
this->precio=p;


}
void Producto::pideDatos(void)
{
cout<<"Nombre del producto:";cin>>this->Nombre;
cout<<endl<<"Numero de producto:";cin>>this->numero;
cout<<endl<<"Precio del producto:";cin>>this->precio;

}
void Producto::muestraDatos(void)
{
cout<<"--------------"<<endl
    <<"Producto:"<<this->Nombre<<endl
    <<"Numero:"<<this->numero<<endl
    <<"Precio:"<<this->precio<<endl
    <<"--------------"<<endl;

}
string Producto::dameNombre(void)
{
return this->Nombre;


}
void Producto::modificaNombre(string N)
{
this->Nombre=N;


}
int Producto::dameNumero(void)
{

return this->numero;

}
void Producto::modificaNumero(int n)
{
this->numero=n;


}
float Producto::damePrecio(void)
{

return this->precio;

}
void Producto::modificaPrecio(float p)
{

this->precio=p;

}
void Producto::modificaDatos(string N, int n, float p)
{

this->Nombre=N;
this->numero=n;
this->precio=p;

}
