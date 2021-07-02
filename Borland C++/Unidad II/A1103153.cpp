// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103153.CPP
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
     gotoxy(20, 4);
     cout<<" *** PROGRAMA VALORES DE CODIGO ASCII *** ";
     gotoxy(18, 8);
     cout<<"Elije el caracter del codigo ASCII de: a...g : ";
     cin>>letra;

     switch(letra)
      {
        case 'a':
        gotoxy(37, 11);
        cout<<char(130);
        break;

        case 'b':
        gotoxy(37, 11);
        cout<<char(160);
        break;

        case 'c':
        gotoxy(40, 11);
        cout<<char(161);
        break;

        case 'd':
        gotoxy(37, 11);
        cout<<char(162);
        break;

        case 'e':
        gotoxy(37,11);
        cout<<char(163);
        break;

        case 'f':
        gotoxy(35, 11);
        cout<<char(164);
        break;

        case 'g':
        gotoxy(35, 11);
        cout<<char(165);
        break;

        default:
        gotoxy(32, 11);
        cout<<"Valor no aceptado !!!";
      }
      gotoxy(33,15);
      cout<<"FIN DEL PROGRAMA";
      getch();
      return 0;
  }