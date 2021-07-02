// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103143.CPP
// Programa CALCULO DE AREAS Y VOLUMENES DE FIGURAS GEOMETRICAS Cono
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>
#include<math.h>

float R, h, g, Area, Volum, radiocua;

main()
  {
    clrscr();
    cout<<"CALCULO DE AREA Y VOLUMEN DEL CONO";
    cout<<"\n\nIngrese el radio: \n";
    cin>>R;
    cout<<"Ingrese la altura: \n";
    cin>>h;
    cout<<"Ingrese la generatriz: \n";
    cin>>g;
    Area=3.14159*R*(g+R);
    radiocua=pow(R,2);
    Volum=0.333*3.14159*radiocua*h;
    cout<<"\nEL AREA del cono es: "<<Area;
    cout<<"\nEL VOLUMEN del cono es: "<<Volum;
    getch();
    return 0;
  }