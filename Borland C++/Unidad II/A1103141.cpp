// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// M�DULO 1 DE LA ESPECIALIDAD DE PRORGAMACI�N
// Archivo A1103141.CPP
// Programa EXPONENCIAL
// Lenguaje C++
// Alumno: Jos� Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Ya�ez Palafox

#include<iostream.h>
#include<conio.h>
#include<math.h>

int n;
float resultado;

main()
  {
    clrscr();
    cout<<"Ingrese el Numero que desea usar en la Exponencial: \n";
    cin>>n;
    resultado=exp(n);
    cout<< resultado <<" es el exponencial de " <<n;
    getch();
    return 0;

  }