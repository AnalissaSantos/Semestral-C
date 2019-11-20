//
//  jyfvyrt.c
//  asdfghj
//
//  Created by Analissa Santos on 11/18/19.
//  Copyright © 2019 Analissa Santos. All rights reserved.
//
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    return 0;
    
}

int cambionivel()
{
    int nivel=4, puntos=0;
    do {
    scanf("%i", & puntos);
    if (puntos>3)
    {
        if (nivel <=6)
        {
            nivel=nivel+1;
            printf("¡Felicidades! Por tener tantas respuestas correctas te subiremos al siguiente nivel\n\n");
        }
        else if (nivel == 7)
        {
            printf("¡Felicidades! Por tener tantas respuestas correctas te subiríamos al siguiente nivel, aunque parece que estàs en el nivel màximo, por lo que permanecerás aquí\n\n");
        }
    }
    else if (puntos==3)
    {
        nivel=nivel;
        printf("¡Bien hecho! Has respondido una buena cantidad de respuestas correctas, por lo que permaneceràs en el mismo nivel\n\n");
    }
    else if (puntos<3)
    {
        if (nivel>=2)
        {
            nivel=nivel-1;
            printf("Qué lástima, no has podido responder suficientes preguntas correctamente... :(  Por lo tanto, te reduciremos al nivel anterior. ¡Sigue esforzándote!\n\n");
        }
        else if (nivel == 1)
        {
           printf("Qué lástima, no has podido responder suficientes preguntas correctamente... :(  Por lo tanto, te reduciríamos al nivel anterior; sin embargo, ya estás en el menor nivel. Pero no te preocupes, sigue esforzándote y subirás de nivel. ¡Tú puedes!\n\n");
        }
    }
    } while(puntos!=123456789); //Lo puse asì  para poder probar la funcion con un loop y tener una salida
    return nivel;
}




int timerzzz()
{
    time_t t1, t2;
    int numero, numero2, solucion, respuesta, puntos=0, NumProblemas=0, diferencia=0;
    t1 = time(NULL);
    while (NumProblemas<5)
    {
        t2=time(NULL);
        diferencia=difftime(t2, t1);
        if (diferencia>=20) { NumProblemas=5; }
        else
        {
            srand((unsigned) time(NULL));
            numero2 = rand() % 10;
            numero = rand() % 10;
            solucion = numero + numero2 ;
            printf("\t%i + %i = ", numero, numero2);
            scanf("%i", & respuesta);
            if (respuesta == solucion) {puntos ++; NumProblemas++;}
            else if (respuesta!=solucion) { NumProblemas++; }
        }
   }
    printf("Tu puntaje es %i\n", puntos);
    return 0;
}




