// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// M�DULO 1 DE LA ESPECIALIDAD DE PRORGAMACI�N
// Archivo A1103130.CPP
// PROGRAMA DE CONVERSION DE GRADOS FAHRENHEIT A GRADOS CENTIGRADOS Y GRADOS KELVIN
// Lenguaje C++
// Alumno: Jos� Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Ya�ez Palafox

#include<iostream.h>
#include<conio.h>

float GF, GC, GK;

main()
  {
    clrscr();
    cout<<"Grados Fahrenheit a convertir: ";
    cin>>GF;
    GC=(GF-32)*0.556;
    GK=GC+273;
    cout<<"Grados Fahrenheit = " <<GC <<" " <<"Grados Centigrados \n";
    cout<<"Grados Fahrenheit = " <<GK <<" " <<"Grados Kelvin \n";
    getch();
    return 0;
  }
