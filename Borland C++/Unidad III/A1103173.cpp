// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103173.CPP
// PROGRAMA FUNCIONES CON RETORNO DE PARAMETROS
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

void Local (int val); //Prototipo
main()
	{
   	int x;
      clrscr();
      cout<<"\n\nIntroduce un valor: ";
      cin>>x;
      cout<<"Valor antes de llamar a la funcion Local: " <<x <<endl;
      Local(x);
      cout<<"\nValor despues de llamar a la funcon Local: " <<x <<endl;
      getch();
      return 0;
   }

void Local(int val)
	{
   	cout<<"valor de la variable dentro de funcion Local = " <<val <<endl;
      val=5000;
      cout<<"Valor de la variable dentro de funcion Local= " <<val <<endl;
   }