// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103166.CPP
// PROGRAMA ORDENAMIENTO BURBUJA CON DATOS CARACTER
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

main()
	{
   	int x=10;
      char arreglo[10][20];
      int maxelem;
      int primero, ultimo;
      int i, j;
      char aux[20];
      clrscr();
      cout<<"Nombres a ordenar (1-10): ";
      cin>>maxelem;
      cout<<"\n\n";

      for(i=0; i<maxelem; i++)
      	{
         	cout<<"Nombre No. " <<(i+1) <<" : ";
            cin>>arreglo[i];
         }

      for(i=(maxelem-1); i>0; i--)
      	{
         	for(j=0; j<i; j++)
            	{
               	if(strcmp(arreglo[j], arreglo[j+1])>0)
                  	{
                     	strcpy(aux,arreglo[j]);
                        strcpy(arreglo[j], arreglo[j+1]);
                        strcpy(arreglo[j+1], aux);
                     }
               }
         }
      cout<<"\n\n\nNombres en orden: \n"<<endl;

      for(i=0; i<maxelem; i++)
      	{
         	gotoxy(20,14+i);
            cout<<"Nombre " <<i+1 <<" : " <<arreglo[i] <<endl;
         }
      getch();
      return 0;
   }
