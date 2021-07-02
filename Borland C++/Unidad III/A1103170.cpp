// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103170.CPP
// PROGRAMA APLICACION DE PUNTEROS
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

main()
	{
   	clrscr();
      int const x=24;
      int r=0;
      char alfabeto[x]="ABCDEFGHIJKLMNOPQRSTUVW";

      char *p;
      p=&alfabeto[r];
      for (r=0; r<x; r++)
      	{
         	gotoxy(20,2+r);
            cout<<"Caracter [" <<r+1 <<"] \t" <<alfabeto[r] <<" :\t" <<&p <<"\n";
         }
      getch();
      return 0;
   }
