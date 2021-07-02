// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103144.CPP
// Programa CALCULO DE AREAS Y VOLUMENES DE FIGURAS GEOMETRICAS Tetraedro Regular
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>
#include<math.h>

float I, Area, Volum, Aris1, R1, Aris2, R2;

main()
  {
    clrscr();
    cout<<"CALCULO DE AREA Y VOLUMEN DEL TETRAEDRO REGULAR";
    cout<<"\n\nIngrese la medida del arista: \n";
    cin>>I;
    Aris1=pow(I,2);
    R1=sqrt(3);
    Area=Aris1*R1;
    Aris2=pow(I,3);
    R2=sqrt(2);
    Volum=Aris2*R2/12;
    cout<<"\nEL AREA del tetraedro regular es: "<<Area;
    cout<<"\nEL VOLUMEN del tetraedro regular es: "<<Volum;
    getch();
    return 0;
  }