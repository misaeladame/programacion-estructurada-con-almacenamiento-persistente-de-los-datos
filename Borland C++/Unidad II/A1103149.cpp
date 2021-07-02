// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103149.CPP
// Programa POTENCIA O RAOZ
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. José Humberto De La Rosa Guajardo

#include<iostream.h>
#include<conio.h>
#include<math.h>

int op;
float n, base, expone, respot, resrai;

main()
 {
   cout<<"**PROGRAMA PARA CALCULAR RAIZ O POTENCIA** \n\n";
   cout<<"Elige una opcion \n\n";
   cout<<"0. Calcula la raiz \n";
   cout<<"1. Calcula la potencia \n\n";
   cin>>op;
   if (op>=1)
     {
       clrscr();
       cout<<"Ingrese la base: ";
       cin>>base;
       cout<<"Ingrese el exponente: ";
       cin>>expone;
       respot=pow(base,expone);
       cout<< base << " elevado a la " << expone << " es igual a " << respot;
     }
     else
   if (op==0)
     {
       clrscr();
       cout<<"Raiz a calcular: ";
       cin>>n;
       n=sqrt(n);
       cout<<"la raiz cuadrada de tu numero es: \n" << n;
     }
   getch();
   return 0;
 }











       

