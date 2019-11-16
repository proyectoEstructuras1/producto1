#ifndef PRODUCTO_H
#define PRODUCTO_H
#include<iostream>
#include <fstream>
#include <sstream>
#include<string>
#include <stdlib.h>

using namespace std;
class Producto
{
  private:
    string Nombre;
    int numero;
    float precio;
public:
    Producto(void);
    Producto(string N, int n, float p);
    void pideDatos(void);
    void muestraDatos(void);
    string dameNombre(void);
    void modificaNombre(string N);
    int dameNumero(void);
    void modificaNumero(int n);
    float damePrecio(void);
    void modificaPrecio(float p);
    void modificaDatos(string N, int n, float p);
};
istream& operator>>(istream& teclado, Producto& X);
ostream& operator<<(ostream& monitor, Producto X);
bool operator==(Producto Izquierdo, Producto Derecho);
bool operator!=(Producto Izquierdo, Producto Derecho);
//ofstream& operator<<(ofstream& HaciaArchivo, Producto Derecho);
//ifstream& operator>>(ifstream& DesdeArchivo, Producto& Derecho);
#endif // PRODUCTO_H
