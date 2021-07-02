// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103171.CPP
// PROGRAMA FUNCIONES
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

void funcion1(void)
	{
   	cout<<"FUNCION 1 EJECUTADA !\n";
      return ;
   }
void funcion2(void)
	{
   	cout<<"FUNCION 2 EJECUTADA !\n";
      return ;
   }
void retardo(void)
	{
   	long x;
      for(x=1; x<950000000; x++) // Nota: Contador iniciar con dos millones
      x=x++;                     // dependiendo del procesador de tu PC
   }

main()
	{
   	clrscr();
      cout<<"PROGRAMA USO DE FUNCIONES SIMPLES\n\n\n";
      cout<<"Funcion Main llama a la funcion 1...\n";
      retardo();
      funcion1();
      cout<<"Funcion Main llama a la funcion 2...\n";
      retardo();
      funcion2();
      cout<<"\n\n\nFin del programa";
      cout<<"\nPulse tecla para finalizar...";
      getch();
      return 0;
   }

