// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// M�DULO 1 DE LA ESPECIALIDAD DE PRORGAMACI�N
// Archivo A1103147.CPP
// ESTRUCTURA DE CONTROL SELECTIVO DOBLE
// Lenguaje C++
// Alumno: Jos� Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Ya�ez Palafox

#include<iostream.h>
#include<conio.h>

int op, a, b, res;

main()
 {
  clrscr();
  cout<<"PROGRAMA DE ELECCION DE OPERACIONES.\n\n";
  cout<<"1. Suma.\n";
  cout<<"2. Multiplicaci" <<char(162) <<"n." <<"\n\n" ;
  cin>>op;
  if(op==1)
    {
      clrscr();
      cout<<"Valor 1: ";
      cin>>a;
      cout<<"valor 2; ";
      cin>>b;
      res=a+b;
      cout<<"\n\nResultado de tu suma de 2 nums: " <<res;
    }
    else
   if (op==2)
    {
      clrscr();
      cout<<"Valor 1: ";
      cin>>a;
      cout<<"Valor 2: ";
      cin>>b;
      res=a*b;
      cout<<"\n\nResultado de la multiplicaci" <<char(162) <<"n de 2 nums: " <<res;
    }
  cout<<"\n\nPulse una tecla para continuar...";
  getch();
  return 0;
 }