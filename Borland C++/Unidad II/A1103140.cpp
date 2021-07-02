// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103140.CPP
// Programa TANGENTE
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>
#include<math.h>


int x;
float funtan, grados;

main()
 {
  clrscr();
  cout<<"TANGENTE: Angulo a calcular: ";
  cin>>x;
  grados=(x*3.14159)/180;
  funtan=tan(grados);
  cout<<endl;
  cout<<"Valor de la tangente de: " <<x <<char(248) <<" " <<funtan;
  getch();
  return 0;
 }

