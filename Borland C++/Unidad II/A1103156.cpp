// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103156.CPP
// Programa CICLO FOR USO DE UN CONTADOR SUMATORIA
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

int num, i;
float valor, suma;

main()
  {
    clrscr();
    cout<<"PROGRAMA CICLO FOR SUMATORIA. \n\n";
    cout<<"Numeros a contar: ";
    cin>>num;
    for (i=1; i<=num; i++)
      {
        cout<<"Valor #" <<i <<": ";
        cin>>valor;
        suma=suma+valor;
      }
    cout<<"\n\nLa suma de " <<num <<" numeros es: " <<suma;
    getch();
    return 0;
  }