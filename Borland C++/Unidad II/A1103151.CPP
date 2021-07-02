// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103151.CPP
// ESTRUCTURA DE CONTROL SELECTIVO MULTIPLE
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

main()
  {
    int opc;
    float pesos, dls, euros, pvdol, pveuro;
    pvdol=13.10;
    pveuro=16.68;

    cout<<"PROGRAMA DIVISAS EXTRANJERAS. \n\n";
    cout<<"Men" <<char(163) <<" de conversiones. \n\n";
    cout<<"1. Dolares US a Pesos Mx. \n";
    cout<<"2. Euros      a Pesos Mx. \n";
    cout<<"3. Pesos      a Dolares US. \n";
    cout<<"4. Pesos      a Euros. \n\n";
    opc=0;
    cout<<"\n\Elija opci" <<char(162) <<"n: ";
    cin>>opc;

    clrscr();
    if (opc==0)
      {
        cout<<"Los sentimos opcion no valida!" <<endl;
      }
    if (opc==1)
      {
        cout<<"Cant. de Dls a covnertir: ";
        cin>>dls;
        pesos=dls*pvdol;
        cout <<dls <<" Dolares = " <<setprecision(2) <<pesos <<" Pesos Mx. "<<endl;
      }
    if (opc==2)
      {
        cout<<"Cant. de Euros a convertir: ";
        cin>>euros;
        pesos=euros*pveuro;
        cout<<euros <<" Euros = " <<setprecision(2) << pesos <<" Pesos Mx. "<<endl;
      }
    if (opc==3)
      {
        cout<<"Cant. de Pesos a convertir: ";
        cin>>pesos;
        dls=pesos/pvdol;
        cout<<pesos <<" Pesos = " <<setprecision(2) <<dls <<" Dolares. " <<endl;
      }
    if (opc==4)
      {
        cout<<"Cant. de Pesos a convertir: ";
        cin>>pesos;
        euros=pesos/pveuro;
        cout <<pesos <<" Pesos = " <<setprecision(2) <<euros <<" Euros. " <<endl;
      }
    cout <<"\nPulse una tecla para continuar...";
    getch();
    return 0;
  }
