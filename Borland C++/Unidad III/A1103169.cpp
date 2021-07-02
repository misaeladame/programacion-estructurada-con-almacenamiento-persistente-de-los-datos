// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103169.CPP
// PROGRAMA APLICACION DE PUNTEROS
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

main()
	{
   	int a, b;
      int *punt1, *punt2;
      a=5;
      b=5;
      clrscr();
      punt1==&a;
      punt2==&b;
      if(punt1 ==punt2)
      cout<<"Son iguales\n";
      else
      	{
         	cout<<"\nTus punteros son diferentes\n";
            cout<<"\nValor de a= "<<a <<"\tPuntero de a= " <<punt1;
            cout<<"\nValor de b= " <<b <<"\tPuntero de b= " <<punt2;
         }
      getch();
      return 0;
   }