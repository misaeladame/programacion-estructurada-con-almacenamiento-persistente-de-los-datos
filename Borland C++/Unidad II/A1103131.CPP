// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103131.CPP
// PROGRAMA PARA EL CALCULO Y COSTO DE BLOCK PARA MUROS
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

int mt2;
float sb, cu, b, costobloc;

main()
  {
    cout<<"PROGRAMA PARA EL CALCULO Y COSTO DE BLOCK PARA MUROS \n\n";
    cout<<"Dimension del block 15x40x20 (grosor x alto x ancho en cm.) \n\n";
    cout<<"Mt2 de Muro a construir: ";
    cin>>mt2;
    sb=0.4*0.2;
    cu=10;
    b=(mt2/sb);
    costobloc=b*cu;
    cout<<"Blocks requeridos: " <<b <<"\n";
    cout<<"Costo total de los Blocks sin IVA: " <<costobloc;
    getch();
    return 0;
  }