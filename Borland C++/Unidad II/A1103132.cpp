// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103132.CPP
// FUNCIONES MATEMATICAS PREDEFINIDAS ceil
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

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