// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

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
