// CENTRO DE BACHILLERATO TECNOLOGICO industrial y de servicios No 4
// MÓDULO 1 DE LA ESPECIALIDAD DE PRORGAMACIÓN
// Archivo A1103161.CPP
// PROGRAMA ARREGLO PARALELOS
// Lenguaje C++
// Alumno: José Misael Adame Sandoval  Gpo:11   NL:03
// Titular: Ing. Juan Antonio Yañez Palafox

#include<iostream.h>
#include<conio.h>

main()
  {
    clrscr();
    int R;
    const int N=5, X=5;
    int ALUMNO[X];
    int EDAD[X];
    cout<<"\nARREGLOS PARALELOS \n\n";
    //         ***********      INTRODUCCION DE DATOS
    cout<<"\nIntroduce 5 NUMS. DE CONTROL DE ALUMNOS : \n\n";
    for (R=0; R<N; R++)
      {
        cout<<R+1 <<". No.[" <<R+1 <<"] : ";
        cin>>ALUMNO[R];
      }
    cout<<"\nIntroduce 5 edades: \n\n";
    for (R=0; R<N; R++)
      {
        cout<<R+1 <<". EDAD [" <<R+1 <<"] : ";
        cin>>EDAD[R];
      }
    //           ************    SALIDA DE DATOS
    clrscr();
    cout<<"\nSALIDA DEL ARREGLO PARALELO: \n\n";
    for (R=0; R<N; R++)
      cout<<"ALUMNO " <<ALUMNO[R] <<" tiene : " <<EDAD[R] <<" a" <<char(164) <<"os. \n";
      cout<<"\n\n\n";
      cout<<"DATOS EN LOS ARREGLOS ALUMNO[X] Y EDAD[X]:\n\n";
    for(R=0; R<N; R++)
      cout<<"ALUMNO [" <<R+1 <<"] : " <<ALUMNO[R] <<"\t EDAD [" <<R+1 <<"] : " <<EDAD[R] <<" \n";
      cout<<"\n\nfinal del ARREGLO de caracteres!...";
      getch();
      return 0;
  }
