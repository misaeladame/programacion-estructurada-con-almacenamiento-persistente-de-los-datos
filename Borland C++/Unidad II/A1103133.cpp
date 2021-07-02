// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103133.CPP
// FUNCIONES MATEMATICAS PREDEFINIDAS coseno
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>
#include<math.h>

int x;
float funcoseno, grados;

main()
{
 clrscr();
 cout<<"Angulo a calcular: ";
 cin>> x;

 // Como los datos se expresan en grados para poder aplicar la funcion
 // Coseno que maneja los datos en radianes se debe convertir los datos
 // Por ello hay que efectuar: (grados*pi)/180

 grados=(x*3.14159)/180;
 funcoseno=cos(grados);
 cout<<endl;
 cout<<"Valor del coseno de: " <<x <<char(248) <<" " <<funcoseno;
 getch();
 return 0;
}