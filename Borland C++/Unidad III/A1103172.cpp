// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// M�DULO 1 DE LA ESPECIALIDAD DE PRORGAMACI�N
// Archivo A1103172.CPP
// PROGRAMA FUNCIONES CON RETORNO DE VALOR
// Lenguaje C++
// Alumno: Jos� Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Ya�ez Palafox

#include<iostream.h>
#include<conio.h>

double cuadrado (double); //Prototipo
main()
	{
   	int valor;
      clrscr();
      cout<<"\n\nIntroduce un valor: ";
      cin>>valor;
      cout<<valor <<" elevado al cuadrado = " <<cuadrado(valor) <<endl;
      getch();
      return 0;
   }
	double cuadrado(double valor)
   	{
      	int resultado;
         resultado=valor*valor;
         return resultado;
      }