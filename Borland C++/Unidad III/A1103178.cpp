// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// M�DULO 1 DE LA ESPECIALIDAD DE PRORGAMACI�N
// Archivo A1103178.CPP
// PROGRAMA MANIPULACION DE ARCHIVOS EN C++.
// Lenguaje C++
// Alumno: Jos� Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Ya�ez Palafox

#include<iostream.h>
#include<conio.h>
#include<fstream.h>

main()
	{
   	ofstream outfile ("DIR.TXT",ios::out);
      if(!outfile)
      	{
         	cerr<<"Archivo imposible abrir ! \n";
            return 1;
         }
      cout<<"Introduzca No. , Nombre y Apellido Paterno: \n";
      int num;
      char nom[15];
      char apater[25];
      cout<<"Ingrese datos en el orden indicado... ? \n\n";
      while (cin>>num >>nom >>apater)
      	{
         	outfile<<num <<' ' <<nom <<' ' <<apater <<'\n';
            cout<<"Pulse CTRL+Z e INTRO(2) para fin archivo.\n\n";
         }
      getch();
      return 0;
   }