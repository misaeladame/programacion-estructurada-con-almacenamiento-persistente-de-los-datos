// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103174.CPP
// PROGRAMA FUNCIONES CON PASO DE PARAMETROS POR VALOR Y POR REFERENCIA
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

int cuadrado_valor(int);
void cuadrado_referencia (int &);

main()
	{
   	clrscr();
      int x=2, z=4;
      cout<<"\nPROGRAMA DIFERENCIA ENTRE PARAMETROS POR VALOR Y REFERENCIA \n\n\n";
      cout<<"X = " <<x <<" antes de Cuadrado por valor.\n" <<"Valor devuelto por Cuadrado por Valor: "
      <<cuadrado_valor(x) <<endl;
      cout<<"X = " <<x <<" despu" <<char(130) <<"a de cuadrado por valor\n" <<endl;

      cout<<"Z = " <<z <<" Antes de Cuadrado por Referencia.\n";
      cuadrado_referencia(x);
      cout<<"Z = " <<z <<" Despu" <<char(130) <<"s de Cuadrado por Referencia." <<endl;
      cout<<"La direcci" <<char(162) <<"n de memoria de Cuadrado por Referencia = " <<&z <<endl;
      getch();
      return 0;
   }

int cuadrado_valor (int a)
	{
   	return a*=a;
   }

void cuadrado_referencia(int &cRef)
	{
   	cRef*=cRef;
   }

