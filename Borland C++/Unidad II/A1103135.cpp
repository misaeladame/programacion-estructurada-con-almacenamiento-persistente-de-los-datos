// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// M�DULO 1 DE LA ESPECIALIDAD DE PRORGAMACI�N
// Archivo A1103135.CPP
// FUNCIONES DE CARACTERES PREDEFINIDAS tolower
// Lenguaje C++
// Alumno: Jos� Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Ya�ez Palafox

#include<iostream.h>
#include<conio.h>
#include<ctype.h>

char letra, funcion;

main()
 {
   clrscr();
   cout<<"Ingrese caracter en May" <<char(163) <<"sculas: ";
   cin>> letra;
   funcion = tolower(letra);
   cout<<endl;
   cout<<"Caracter original: " <<letra<<", modificado: " <<funcion;
   getch();
   return 0;
 }