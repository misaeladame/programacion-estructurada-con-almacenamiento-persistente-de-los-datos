// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103146.CPP
// ESTRUCTURA DE CONTROL SELECTIVA SIMPLE
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

main()
 {
  clrscr();
  char opcion;
  cout<<"** Programa continuar **\n\n";
  cout<<"Deseas continuar (s/n): ";
  cin>>opcion;
  if(opcion=='s')
    cout<<"\nflujo del programa con respuesta CORRECTA...!";
  cout<<"\n\nPulsa una tecla para SALIR";
  getch();
  return 0;
 }