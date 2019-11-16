#ifndef PRODUCTO_H
#define PRODUCTO_H
#include<iostream>
#include<string>

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

#endif // PRODUCTO_H
