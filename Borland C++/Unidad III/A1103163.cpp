// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103162.CPP
// PROGRAMA MATRIZ TIENDA DEPARTAMENTAL
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

int main()
	{
   	clrscr();
      int rep;
      float suma, iva, total;
      const int fin=3;
      char art[fin][15];     //Arreglo Bidimensional
      float costo[fin];     //Arreglo Unidimensional
      cout<<endl;
      suma=0;
      iva=0;
      total=0;
      costo[fin]=0;
      for (rep=0; rep<fin; rep++)
      	{
         	clrscr();
            gotoxy(17,4);
            cout<<"* * * *  TIENDA DEPARTAMENTAL ACME * * * *";
            gotoxy(27,7);
            cout<<"Art" <<char(161) <<"culo: ";
            cin>>art[rep];
            gotoxy(27,8);
            cout<<"Costo del art" <<char(161)<<"culo: " <<(rep+1;
            cin>>costo[rep];
            suma=suma+costo[rep];
            iva=suma*0.16;
            total=suma+iva;
         }
      cout<<"\n " <<endl;
      for (rep=0; rep<fin; rep++)
      	{
         	gotoxy(20,12+rep);
            cout<<(rep+1) <<" Art" <<char(161) <<"culo: \t" <<art[rep] <<" : \t $ " <<setprecision(4) <<costo[rep] <<endl;
         }
      gotoxy(20,18);
      cout<< setiosflags (ios::showpoint | ios::fixed | ios::right);
      cout<<"Costo de las compras : " <<setw(17) <<setfill('_') <<" $ " <<setprecision(2) <<suma;
      gotoxy(20,19);
      cout<<"I. V. A.             : " <<setw(17) <<setfill('_') <<" $ " <<setprecision(2) <<iva;
      gotoxy(20,21);
      cout<<"TOTAL A PAGAR        : " <<setw(16) <<setfill('_') <<" $ " <<setprecision(2) <<total;
      getch();
      return 0;
   }