// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// M�DULO 1 DE LA ESPECIALIDAD DE PRORGAMACI�N
// Archivo A1103139.CPP
// Programa RAIZ CUADRADA
// Lenguaje C++
// Alumno: Jos� Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Ya�ez Palafox

#include<iostream.h>
#include<conio.h>
#include<math.h>

int n;

main()
  {
      cout<<"Raiz a calcular: ";
      cin>>n;
      n=sqrt(n);
      cout<<"la raiz cuadrada de tu numero es: \n" << n;

      getch();
      return 0;
  }
