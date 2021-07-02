// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103165.CPP
// PROGRAMA ORDENAMIENTO BURBUJA CON DATOS ENTEROS
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

int main()
	{
   	const int TAM=8, x=8;
      int i, j, temp;
      long retardo;
      int arreglo[x];
      clrscr();
      gotoxy(25,2);
      cout<<"Introduce 8 N" <<char(162) <<"meros al azar : \n";

      for(i=0; i<TAM; i++)
      	{
         	gotoxy(30, 4+i);
            cout<<"Elemento [" <<i+1 <<"] : ";
            cin>>arreglo[i];
         }

      for(i=1; i<TAM; i++)

      for(j=0; j<TAM-i; j++)

      if(arreglo[j] > arreglo[j+1])
      	{
         	/* Intercambiamos */
            temp=arreglo[j];
            arreglo[j]=arreglo[j+1];
            arreglo[j+1]=temp;
         }
      gotoxy(27,14);
      cout<<"Ordenamiento BURBUJA.";
      gotoxy(26,16);
      cout<<"El arreglo ordenado es: \n";

      for(i=0; i<TAM; i++)
      	{
         	gotoxy(30,17+i);
            cout<<"Elemento [" <<i+1 <<"] = " <<arreglo[i];

            for(retardo=0; retardo<=90032000; retardo++) //Cambiar valor, iniciando con 15000
            	{
               }
         }
      getch();
      return 0;
   }