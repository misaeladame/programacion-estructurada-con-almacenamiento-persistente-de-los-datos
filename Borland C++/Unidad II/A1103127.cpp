// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// M�DULO 1 DE LA ESPECIALIDAD DE PRORGAMACI�N
// Archivo A1103127.CPP
// MANEJO DE VARIABES SIMPLES
// Lenguaje C++
// Alumno: Jos� Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Ya�ez Palafox

#include<iostream.h>
#include<conio.h>

int a, b, res;

main()
 {
   clrscr();
   cout<<"Proporciona un num (1-100): ";
   cin>>a;
   cout<<"Dar otro num: ";
   cin>>b;
   res=a+b;
   cout<<"Resultado de la suma de tus 2 nums: " <<res;

   getch();
   return 0;
 }