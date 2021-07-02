// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103136.CPP
// FUNCIONES DE CARACTERES PREDEFINIDAS toupper
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>
#include<ctype.h>

char c1, c2, c3;
char funcion1, funcion2, funcion3;
main()
 {
   clrscr();
   c1='a';
   c2='a';
   c3='a';
   cout<<"Favor de ingresar letras en min" <<char(163) <<"sculas..." <<endl;
   cout<<"1 caracter: ";
   cin>>c1;
   cout<<"2 caracter: ";
   cin>>c2;
   cout<<"3 caracter: ";
   cin>>c3;
   cout<<endl;
   cout<<"Cadena de texto ingresada por el prorgama: "<<c1 <<c2 <<c3 <<endl;
   funcion1 = toupper(c1);
   funcion2 = toupper(c2);
   funcion3 = toupper(c3);
   cout<<endl;
   cout<<"Cadena modificada por el programa: " <<funcion1 <<funcion2 <<funcion3;
   getch();
   return 0;
 }