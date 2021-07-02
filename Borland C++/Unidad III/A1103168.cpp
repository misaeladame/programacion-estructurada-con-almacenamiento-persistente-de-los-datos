// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103168.CPP
// PROGRAMA APLICACION DE PUNTEROS
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

main()
	{
   	clrscr();
      int num, r, val1, val2, val3, val4, val5;
      int n=1;
      num=n;
      int* puntero= &num;
      cout<<"\n\nIntroduce un valor a Val1 : ";
      cin>>val1;
      cout<<"Introduce un valor a Val2 : ";
      cin>>val2;
      cout<<"Introduce un valor a Val3 : ";
      cin>>val3;
      cout<<"Introduce un valor a Val4 : ";
      cin>>val4;
      cout<<"Introduce un valor a Val5 : ";
      cin>>val5;

      cout<<"\n\nValor de la variable: " <<val1 <<" Direccion es: " <<&val1;
   	cout<<"\nValor de la variable: " <<val2 <<" Direccion es: " <<&val2;
      cout<<"\nValor de la variable: " <<val3 <<" Direccion es: " <<&val3;
      cout<<"\nValor de la variable: " <<val4 <<" Direccion es: " <<&val4;
      cout<<"\nValor de la variable: " <<val5 <<" Direccion es: " <<&val5;
      cout<<"\n\n\n\n";

      for (r=1; r<=5; r++)
      cout<<"Variable A iteracion: " <<num++ <<" Direccion: " <<puntero <<endl;
      getch();
      return 0;
   }
