// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103180.CPP
// PROGRAMA ARCHIVOS BINARIOS EN C++.
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>
#include<fstream.h>

int main()
	{
   	char *p="BIENVENIDOS al Modulo 1 PROGRAMACION ESTRUCTURADA. \n\n\xff";
      //char *p="BIENVENIDOS al Modulo 1 PROGRAMACION ESTRUCTURADA. \n";
      ofstream salidadatos("BIN.DAT", ios::out | ios::binary);
      if (!salidadatos)
      	{
         	cerr<<"Imposible abrir archivo ! \n";
            return 1;
         }
      while (*p) salidadatos.put(*p++);
      salidadatos.close();
      cout<<"\nTransfiriendo datos al archivo BIN.DAT !...";
      getch();
      return 0;
   }
