// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// M�DULO 1 DE LA ESPECIALIDAD DE PRORGAMACI�N
// Archivo A1103128.CPP
// MANEJO DE VARIABES SIMPLES
// Lenguaje C++
// Alumno: Jos� Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Ya�ez Palafox

#include<iostream.h>
#include<conio.h>

int Ncon;
const char Nom[]="Jose";
const char Apater[]="Adame";
const int Calif=6;

main()
 {
   clrscr();
   cout<<"Ingrese su numero de control: ";
   cin>>Ncon;
   cout<<Ncon <<" "<<Nom <<" " <<Apater <<" Tu calificacion es: " <<Calif <<" Aprobado";
   getch();
   return 0;
 }