// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// M�DULO 1 DE LA ESPECIALIDAD DE PRORGAMACI�N
// Archivo A1103134.CPP
// FUNCIONES MATEMATICAS PREDEFINIDAS
// Lenguaje C++
// Alumno: Jos� Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Ya�ez Palafox

#include<iostream.h>
#include<conio.h>
#include<math.h>

int x, y;
float funpot;

main()
{
  clrscr();
  cout<<"Ingresa su base: ";
  cin>> x;
  cout<<"Potencia a elevar: ";
  cin>> y;
  funpot=pow (x,y);
  cout<<endl;
  cout<<x <<" elevado a: " <<y <<" = " <<funpot;
  getch();
  return 0;

}