// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// M�DULO 1 DE LA ESPECIALIDAD DE PRORGAMACI�N
// Archivo A1103179.CPP
// PROGRAMA LECTURA DE ARCHIVOS BINARIOS EN C++.
// Lenguaje C++
// Alumno: Jos� Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Ya�ez Palafox

#include<iostream.h>
#include<conio.h>
#include<fstream.h>

int main()
	{
   	char txt[35];
      char texto;
      ifstream ent_datos("BIN.DAT" ,ios::in | ios::binary);
      if (!ent_datos)
      	{
         	cerr<<"Imposoble abrir archivo ! \n";
            return 1;
         }
      while (ent_datos)
      	{
         	ent_datos.get(texto);
            cout<<texto;
         }
      cout<<endl;
      getch();
      return 0;
   }
