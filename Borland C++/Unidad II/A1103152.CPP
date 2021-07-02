// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103152.CPP
// ESTRUCTURA DE CONTROL SELECTIVO MULTIPLE SWITCH-CASE.
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

char letra;

main()

  {
     clrscr();
     gotoxy(22, 4);
     cout<<" *** PROGRAMA SABORES DE HELADO *** ";
     gotoxy(20, 8);
     cout<<"Elije sabor con una letra min" <<char(162) <<"scula: a...f : ";
     cin>>letra;

     switch(letra)
      {
        case 'a':
        gotoxy(37, 11);
        cout<<"ALMENDRAS";
        break;

        case 'b':
        gotoxy(37, 11);
        cout<<"BANANA";
        break;

        case 'c':
        gotoxy(40, 11);
        cout<<"COCO";
        break;

        case 'd':
        gotoxy(37, 11);
        cout<<"DURAZNO";
        break;

        case 'e':
        gotoxy(37,11);
        cout<<"ENDRINA\n\n";
        getch();
        gotoxy(12, 13);
        cout<<"verdad que no conoces esta fruta... investigala si existe! ";
        break;

        case 'f':
        gotoxy(35, 11);
        cout<<"FRAMBUESA";
        break;

        default:
        gotoxy(32, 11);
        cout<<"Valor no aceptado !!!";
      }

      getch();
      return 0;
  }
