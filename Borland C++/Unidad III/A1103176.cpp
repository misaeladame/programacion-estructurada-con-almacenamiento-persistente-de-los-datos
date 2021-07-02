// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103176.CPP
// PROGRAMA ARRREGLO ESTRUCTURAS EN C++
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

struct calificas
	{
   	char nom[15];
      int cal;
   };

main()
	{
   	int a;
      const int b=3;        // NUM ELEMENTOS DEL ARREGLO
      struct calificas calif[b];
      cout<<"Solo una palabra por opci"<<char(162)<<"n" <<endl;
      for(a=0; a<b; a++)
      	{
         	cout<<endl;
            cout<<"Nombre: ";
            cin>>calif[a].nom;
            cout<<"Calif: ";
            cin>>calif[a].cal;
         }
      cout<<endl;
      cout<<"\tAlumnos:"<<"\tCalificaci"<<char(162)<<"n";
      for(a=0; a<b; a++)
      	{
         	cout<<endl;
            cout<<"\t"<<a+1 <<". " <<calif[a].nom <<"\t\t" <<calif[a].cal;
         }
      cout<<endl;
      cout<<"\nPulse una tecla para terminar...";
      getch();
      return 0;
   }
