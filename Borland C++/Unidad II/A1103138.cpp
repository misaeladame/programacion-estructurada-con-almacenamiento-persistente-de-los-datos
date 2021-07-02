// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103138.CPP
// Programa POTENCIACION
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>
#include<math.h>

int n, base ;
float resultado;

main()
 {
   clrscr();
   cout<<"Ingrese la base: ";
   cin>>base;
   cout<<"Ingrese el exponente: ";
   cin>>n;
   resultado=pow(base,n);
   cout<< base << " elevado a la " << n << " es igual a " << resultado;

   getch();
   return 0;
 }