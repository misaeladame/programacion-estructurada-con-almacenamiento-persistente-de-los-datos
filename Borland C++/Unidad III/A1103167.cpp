// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103167.CPP
// PROGRAMA USO DE PUNTEROS
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

main()
	{
   	int Cuenta, N;
      int *M;
      Cuenta=100;
      M=&Cuenta;
      N=*M;
      cout<<"\nCuenta es el valor de la variable con contenido= " <<Cuenta;
      cout<<"\nM es el Puntero de Cuenta : " <<M;
      cout<<"\nN devuelve el valor contenido en el puntero &Cuenta: " <<N;
      getch();
      return 0;
   }