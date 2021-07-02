// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103158.CPP
// Programa CICLO WHILE
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

char opc, cont;
int fac1, fac2;
float producto;

main()
 {
  cout<<"\nTablas de multiplicar 1 al 10";
  opc='S';
  while (opc=='S' || opc=='s')
    {
      cout<<"\nQue tabla de multiplicar deseas: ";
      cin>>fac1;
      fac2=1;
      while(fac2<=10)
        {
          producto=fac1*fac2;
          cout<<"\n" <<fac1 <<"x" <<fac2 <<" = " <<producto;
          fac2=fac2+1;
        }
      while(fac2>10)
        {
          cout<<"\ncontinuar s/n: ";
          cin>>cont;
          opc=cont;
          break;
        }
     }
  }

