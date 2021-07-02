// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103150.CPP
// Programa CONVERSION DE MEDIDAS EXTRANJERAS A METROS
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

int opc;
float pies, pulg, yds, millas, val, mts;

main()
  {
    pulg=0.0254;
    pies=0.3048;
    yds=0.9144;
    millas=1609;
    cout<<"** PROGRAMA CONVERTIR MEDIDAS EXTRANJERAS A METROS ** \n\n";
    cout<<"Men" <<char(163) <<" de Conversiones. \n\n";
    cout<<"1. Pulgadas a Metros \n";
    cout<<"2. Pies a Metros \n";
    cout<<"3. Yardas a Metors \n";
    cout<<"4. Millas a Metros \n\n";
    cout<<"Eliga la opci" <<char(162) <<"n: \n";
    cin>>opc;
    clrscr();
    if(opc==0)
      {
        cout<<"Lo sentimos opcion no valida";
      }
    if(opc==1)
      {
        cout<<"Valor a convertir: \n";
        cin>>val;
        mts=val*pulg;
        clrscr();
        cout<<val <<" Pulgadas = " <<setprecision(2) <<mts <<" Metros. ";
      }
    if(opc==2)
      {
        cout<<"Valor a convertir: \n";
        cin>>val;
        mts=val*pies;
        clrscr();
        cout<<val <<" Pies = " <<setprecision(2) <<mts <<" Metros. ";
      }
    if(opc==3)
      {
        cout<<"Valor a convertir: \n";
        cin>>val;
        mts=val*yds;
        clrscr();
        cout<<val <<" Yardas = " <<setprecision(2) <<mts <<" Metros. ";
      }
    if(opc==4)
      {
        cout<<"Valor a convertir: \n";
        cin>>val;
        mts=val*millas;
        clrscr();
        cout<<val <<" Millas = " <<setprecision(2) <<mts <<" Metros. ";
      }
    if(opc>=5)
      {
        cout<<"Lo sentimos opcion no valida";
      }
      cout<<"\n\n\nPulsa una tecla para continuar...";
      getch();
      return 0;
   }
