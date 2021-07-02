// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103154.CPP
// Programa CICLO FOR USO DE UN CONTADOR
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

main()

  {
    int i, nc;
    clrscr();
    cout<<"PROGRAMA CICLO FOR. \n\n";
      cout<<"Nums. a contar: ";
    cin>>nc;
    for (i=1; i<=nc; i++)
      cout << i <<" ";
    cout <<"\n\nPulse una tecla para continuar...";
    getch();
    return 0;
  }
