// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// M�DULO 1 DE LA ESPECIALIDAD DE PRORGAMACI�N
// Archivo A1103132.CPP
// FUNCIONES MATEMATICAS PREDEFINIDAS ceil
// Lenguaje C++
// Alumno: Jos� Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Ya�ez Palafox

#include<iostream.h>
#include<conio.h>
#include<math.h>

float x, funcion;

main()
{
  clrscr();
  cout<<"Proporcione un numero decimal: ";
  cin>> x;
  funcion=ceil(x);
  cout<<endl;
  cout<<"Valor ingresado: " <<x <<" Redondeado: " <<funcion;
  getch();
  return 0;
}