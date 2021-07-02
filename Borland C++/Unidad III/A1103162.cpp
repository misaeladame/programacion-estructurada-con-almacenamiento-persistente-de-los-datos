// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103162.CPP
// PROGRAMA ARREGLO PARALELOS
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

main()
	{
   	clrscr();
      const int N=5;
      int TOT=0;
      int NUMS[N];
      cout<<"**PROGRAMA DE SUMATORIA POR ARREGLOS**";
      cout<<"\n\nIntroduce 5 elementos del arreglo \n\n";
      for (int I=0; I<N; I++)
      	{
         	cout<<I+1<<". " <<"Elemento: ";
            cin>>NUMS[I];
            TOT+=NUMS[I];
         }
      for (int i=0; i<N; i++)
         cout<<"\nElemento: [" <<i+1 <<"] : " <<NUMS[i];
      	cout<<"\n\nLa suma de tus " <<N <<" Numeros = " <<TOT;
      getch();
      return 0;
   }


