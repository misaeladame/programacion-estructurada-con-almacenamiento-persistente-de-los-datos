// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103164.CPP
// PROGRAMA MATRIZ CALIFICACION DE ALUMNO
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

int main()
	{
   	clrscr();
      int repalum, repmat;
      const alum=5, mat=2;
      float sum, promed, total;
      char N_cont[alum][10];       //Arreglo bidimensional
      float materias[alum][mat], suma[alum], promedio[alum];
      cout<<endl;
      promed=0;
      total=0;

      for(repalum=0; repalum<alum; repalum++)
      	{
         	clrscr();
            gotoxy(17,4);
            cout<<"* * * * CONTROL ESCOLAR ACME * * * *";
            gotoxy(27,7);
            cout<<"No. control del alumno: ";
            cin>>N_cont[repalum];
            sum=0;

            for(repmat=0; repmat<mat; repmat++)
            	{
               	clrscr();
                  gotoxy(17,4);
                  cout<<"* * * * CONTROL ESCOLAR ACME * * * *";
                  gotoxy(27,8);
                  cout<<"Calif. del alumno: " <<repalum+1 <<" : ";
                  cin>>materias[repalum][repmat];
                  sum=sum+materias[repalum][repmat];
                  // total=suma;
               }

            suma[repalum]=sum;
            promedio[repalum]=suma[repalum]/mat;
         }

      clrscr();
      gotoxy(20,5);
      cout<<"Salida de Calificaciones de alumnos \n\n\n";

      for(repalum=0; repalum<alum; repalum++)
      	{
         	gotoxy(15,8+repalum);
            cout<<repalum+1 <<". Alumno: " <<N_cont[repalum] <<setw (6);

            for(repmat=0; repmat<mat; repmat++)
            	{
               	cout<<setw(12) <<"Mat" <<repmat+1 <<" : " <<materias[repalum][repmat];
               }
            gotoxy(22, 16+repalum);
            cout<<"Promedio del alumno "<<N_cont[repalum] <<"      :  " <<promedio[repalum];
         }
      getch();
      return 0;
   }

