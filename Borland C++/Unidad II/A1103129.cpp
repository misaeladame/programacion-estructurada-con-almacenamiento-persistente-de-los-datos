// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103129.CPP
// MANEJO DE VARIABES SIMPLES
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

float Calif, SUBC1, SUBC2, SUBC3, SUBC4;
int Particip, Practs, Tareas, Plataf;
char Nom[50];
char Apell[50];
main()
 {
  clrscr();
  cout<<"Ingrese el nombre: \n";
  cin>>Nom;
  cout<<"Ingrese el apellido: \n";
  cin>>Apell;
  cout<<"Ingresa tu calificacion de Participaciones: ";
  cin>>Particip;
  cout<<"Ingresa tu calificacion de Practicas: ";
  cin>>Practs;
  cout<<"Ingresa tu calificacion de Tareas: ";
  cin>>Tareas;
  cout<<"Ingresa tu calificacion de plataforma: ";
  cin>>Plataf;
  SUBC1=Particip*0.20;
  SUBC2=Practs*0.30;
  SUBC3=Tareas*0.15;
  SUBC4=Plataf*0.35;
  Calif=SUBC1+SUBC2+SUBC3+SUBC4;
  cout<<Nom <<" " <<Apell <<"\n" ;
  cout<<"Tu calificacion es: " << Calif;

  getch();
  return 0;
 }

