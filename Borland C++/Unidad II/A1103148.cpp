// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// M�DULO 1 DE LA ESPECIALIDAD DE PRORGAMACI�N
// Archivo A1103148.CPP
// Programa CALIFICACIONES
// Lenguaje C++
// Alumno: Jos� Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Ya�ez Palafox

#include<iostream.h>
#include<conio.h>

int CALIF;

main()
  {
    clrscr();
    cout<<"**PROGRAMA DE SI APROBASTE** \n\n";
    cout<<"Inserta tu calificaci" <<char(162) <<"n. \n" ;
    cin>>CALIF;
    if (CALIF>=6)
      {
        clrscr();
        cout<<"APROBADO";
      }
      else
      {
        clrscr();
        cout<<"REPROBADO";
      }
    getch();
    return 0;
  }
