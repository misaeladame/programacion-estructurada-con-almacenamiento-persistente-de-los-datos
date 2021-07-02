// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103175.CPP
// PROGRAMA ESTRUCTURAS EN C++
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

struct alumos
	{
   	char apenom[10];
      char esp[15];
      int edad;
      float calif;
   };

main()
	{
   	struct alumos alum;
      cout<<"ESTRUCTURAS EJERCICIO 2"<<endl;
      cout<<endl;
      cout<<"\nDATOS DE ALUMNOS: "<<endl;
      cout<<"\nApellido alumno: ";  //DATOS DE ENTRADA
      cin>>alum.apenom;
      cout<<"Especialidad : ";
      cin>>alum.esp;
      cout<<"Edad         : ";
      cin>>alum.edad;
      cout<<"Calificaci"<<char(162) <<"n : ";
      cin>>alum.calif;
      cout<<endl;                      //DATOS DE SALIDA
      cout<<"\nALUMNO      : " <<alum.apenom;
      cout<<"\nESPECALIDAD : " <<alum.esp;
      cout<<"\nEDAD        : " <<alum.edad;
      cout<<"\nCALIFICACION: " <<alum.calif;
      cout<<endl;
      cout<<"\nUna tecla para terminar...";
      getch();
      return 0;
   }
