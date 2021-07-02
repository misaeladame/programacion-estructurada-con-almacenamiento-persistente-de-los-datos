// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103159.CPP
// EJEMPLO DE ARREGLO
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

main()
  {
    clrscr();
    int REPITE;
    const int X=7;
    char NOM[X];
    cout<<"\nPROGRAMA DE ARREGLOS 1. \n\n\n";
    cout<<"\nIntroduce una palabra de 8 letras: ";
    cin>>NOM;
    cout<<"\nEl nombre que tecleaste fue: " <<NOM <<"\n\n\n";
    for (REPITE=0; REPITE<=X; REPITE++)
    cout<<REPITE+1 <<" NOM[" <<REPITE <<"]: " <<NOM[REPITE] <<"\t"<<endl;
    cout<<"\n\nFinal del ARREGLO de caracteres!...";
    getch();
    return 0;
  }