// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103137.CPP
// FUNCIONES DE PREDEFINIDAS ENRTADA Y SALIDA DE conio.h
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

int h, v, x, y;

main()
 {
   clrscr();
   for (y=6; y<14; y+=1)
    {
     x=12;
     gotoxy(x,y);
     for (h=x; h<70; h+=1)
       cout<<char(176);
    }
  x=16;
  y=8;
  gotoxy(x, y);
  cout<<"BIENVENIDOS AL CURSO DE PROGRAMACION MODULO 1 ";
  cout<<endl;
  gotoxy(80,25);
  getch();
  return 0;
 }
