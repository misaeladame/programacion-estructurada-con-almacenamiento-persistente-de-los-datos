// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103177.CPP
// PROGRAMA ARCHIVOS DE TEXTO EN C++
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox
// EN ESTE EJERCICIO ANTES DE EJECUTAR EL PROGRAMA DEBES CREAR EL ARCHIVO
// PREVIO.TXT Y AGREGA ALGO DE CONTENIDO DENTRO DE EL
// NUEVO.TXT RECIBIRÁ EL CONTENIDO DE OLDFILK.TXT

#include<iostream.h>
#include<conio.h>
#include<fstream.h>

main()
	{
   	char ch;
      ifstream f1 ("PREVIO.TXT"); // Objeto f1, archivo de lectura Oldfile.TXT
      ofstream f2 ("NUEVO.TXT"); // Objeto f2, archivo de escritura Newfile.TXT
      	if(!f1)
         	{
            	cerr<<"No se puede abrir PREVIO.TXT para entrada de datos";
               return 1;
            }
         if(!f2)
         	cerr<<"No se puede abrir NUEVO.TXT para salida de datos";
         else cout<<"\nContenido del archivo PREVIO transferido al archivo NUEVO !.";

      while (f2 && f1.get(ch))
      	f2.put(ch);

      getch();
      return 0;
   }

