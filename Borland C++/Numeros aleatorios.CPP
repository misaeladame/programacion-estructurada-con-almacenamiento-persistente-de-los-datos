// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// M�DULO 1 DE LA ESPECIALIDAD DE PRORGAMACI�N
// Lenguaje C++
// Alumno: Jos� Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Ya�ez Palafox

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

main()
	{
		int n,c;
		for(c=0; c<10; c++)
			{
   			n=rand()%100+1;
    		   cout<<"\nValor "<<(c+1) <<": "<<n;
  		   }
		getch();
		return 0;
	}
