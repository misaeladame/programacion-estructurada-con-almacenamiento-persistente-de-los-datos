// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103179.CPP
// PROGRAMA ARCHIVOS DE ESCRITURA Y LECTURA EN C++.
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
void lineadesalida(int, const char *, const char *, float);

main()
	{
   	int opc;
      int ncont;
      char apater[20];
      char nom[15];
      float calif;
      ofstream outfile ("Calif.dat",ios::app);
      ifstream infile ("Calif.dat");
      cout<<" ** Programa de Control Escolar **\n\n";
      cout<<"1. Agregar Personal al Disco. \n";
      cout<<"2. Despliegue de datos de archivo. \n";
      cout<<"3. Salir. \n\n";
      cout<<"Elige opci" <<char(162) <<"n: ";
      cin>>opc;
      if (opc==1)
      	{
         	if(!outfile)
         		{
            		cerr<<"Imposible abrir archivo ! \n";
                  return 1;
               }
            cout<<"No. , Apellido, Nombre, Calificaci"<<char(162) <<"n : \n";
            cout<<"CTRL+Z para capturar datos.\n\n";
            while (cin>>ncont >>apater >>nom >>calif)
            	{
               	outfile<<ncont <<' ' <<apater <<' ' <<nom <<' ' <<calif <<'\n';
                  cout<<"? ";
               }
         }
      if (opc==2)
      	{
         	cout<<"\nOpci" <<char(162) <<"n 2 DESPLIEGUE DE DATOS:\n\n";
            if (!infile)
            	{
               	cerr<<"Imposibleabrir archivo ! \n";
                  return 1;
               }
            while(infile>>ncont >>apater >>nom >>calif)
            	lineadesalida(ncont, apater, nom, calif);

         }
      if (opc>=3)
      	{
         	cout<<"\n\nSALIDA DEL PROGRAMA...";
         }
      getch();
      return 0;
   }

   void lineadesalida (int nc, const char * apt, const char * nmb, float cali)
   	{
      	cout<<'\n';
         cout<<nc <<char(32) <<nmb <<char(32) <<apt <<char(32) <<cali;
      }
