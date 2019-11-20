
//  Copyright © 2019 Analissa Santos. All rights reserved.

#include <stdio.h>

int main() {
    //PROYECTO SEMESTRAL - MI EDAD MATEMÁTICA
    char nombre [20];
    int nacimiento, rango, edad, puntos, seguir;
    
    printf ("Bienvenido al Programa MI EDAD MATEMÁTICA" "\n");
    printf ("Instrucciones:\n");
    printf ("Para Iniciar Escriba los siguientes datos\n");
    printf ("Su Nombre: \n");
    scanf("%s", nombre);
    printf ("Su Año De Nacimiento\n");
    scanf ("%i", & nacimiento);
    edad= 2019 - nacimiento;
    rango = ubicarRangoconEdad(edad);
    do {
    switch (rango) {
        case 1:
           puntos = ProblemasRango1();
            break;
        case 2:
            puntos = ProblemasRango2();
            break;
//        case 3:
//            puntos = ProblemasRango3();
//            break;
//        case 4:
//            puntos = ProblemasRango4();
//            break;
//        case 5:
//            puntos = ProblemasRango5();
//            break;
//        case 6:
//            puntos = ProblemasRango6();
//            break;
//        case 7:
//            puntos = ProblemasRango7();
//            break;
    }
   rango = cambionivel(puntos, rango);
    printf("%i",puntos); printf(" %i", rango); printf("\n");
    
    printf("Quieres Seguir Jugando?\n");
        printf("Si desea seguir, presione 1");
        scanf("%i",& seguir);
    }
    while (seguir == 1 );
     return 0;
}


