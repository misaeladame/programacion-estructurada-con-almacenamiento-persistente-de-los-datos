// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103155.CPP
// Programa CICLO POR ANIDADO TABLAS DE MULTIPLICAR
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

int a, prod, tabla;

main()
 {
   clrscr();
   cout<<"PROGRAMA CICLO FOR. \n\n";
    cout<<"Tabla a multiplicar: ";
   cin>>tabla;
   cout<<"\n\n";
   for (a=1; a<=10; a=a+1)
     {
       prod=a*tabla;
       gotoxy(30,6+a);
       cout<< tabla <<" x " << a <<" = " <<prod <<endl;
     }
       gotoxy(20, 20);
       cout<<"Pulse una tecla para continaur...";
       getch();
       return 0;
 }
