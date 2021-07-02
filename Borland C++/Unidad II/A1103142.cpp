// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103142.CPP
// Programa CALCULO DE AREAS Y VOLUMENES DE FIGURAS GEOMETRICAS Cilindro
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>
#include<math.h>

float R, h, Area, Volum, radiocua;

main()
  {
    clrscr();
    cout<<"CALCULO DE AREA Y VOLUMEN DEL CILINDRO";
    cout<<"\n\nIngrese el radio: \n";
    cin>>R;
    cout<<"Ingrese la altura del cilindro: \n";
    cin>>h;
    Area=2*3.14159*R*(h+R);
    radiocua=pow(R,2);
    Volum=3.14159*radiocua*h;
    cout<<"\nEL AREA del cilindro es: "<<Area;
    cout<<"\nEL VOLUMEN del cilindro es: "<<Volum;
    getch();
    return 0;
  }
