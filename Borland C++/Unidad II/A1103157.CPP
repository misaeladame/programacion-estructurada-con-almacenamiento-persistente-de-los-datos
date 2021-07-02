// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103157.CPP
// ESTRUCTURA DE CONTROL REPETITIVO WHILE.
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

main()
  {
    char cont, opc;
    clrscr();
    opc='s';
    cout<<" Programa ciclo salida por la condicion WHILE \n\n";
    while (opc =='s' || opc=='S')
      {
        // clrscr();
        cout<<"\nDeseas continuar :";
        cin>>cont;
        opc=cont;
      }
    cout<<"\n\nFin del ciclo...";
    getch();
    return 0;
  }