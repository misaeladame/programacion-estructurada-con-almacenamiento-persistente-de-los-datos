// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103145.CPP
// Programa CALCULO DE AREAS Y VOLUMENES DE FIGURAS GEOMETRICAS Esfera
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>
#include<math.h>

float r, Area, Volum, r1, r2;

main()
  {
    clrscr();
    cout<<"CALCULO DE AREA Y VOLUMEN DE LA ESFERA";
    cout<<"\n\nIngrese la medida del radio: \n";
    cin>>r;
    r1=pow(r,2);
    Area=4*3.14159*r1;
    r2=pow(r,3);
    Volum=4/3*3.14159*r2;
    cout<<"\nEL AREA de la esfera es: "<<Area;
    cout<<"\nEL VOLUMEN de la esfera es: "<<Volum;
    getch();
    return 0;
  }