// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103160.CPP
// PROGRAMA ARREGLO DE NUMEROS ENTEROS
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

main()
  {
    clrscr();
    const int NUM=5; //puedes variar el valor de n
    int I,N[NUM];
    cout<<"PROGRAMA QUE INTRODUCE 5 NUMEROS EXTERNOS EN UN VECTOR";
    cout<<"\n\n";
    for (I=0; I<NUM; I++)
      {
        cout<<"Introduce NUM" <<I+1 <<" : ";
        cin>>N[I];
      }
    cout<<"\n\nDevolviendo el Arreglo de la memoria...\n\n";
    for (I=0; I<NUM; I++)
    cout<<"\nNum[" <<I <<"] : "<<N[I];
    getch();
    return 0;
  }