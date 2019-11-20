//
//  Rango3.c
//  asdfghj
//
//  Created by Analissa Santos on 11/20/19.
//  Copyright © 2019 Analissa Santos. All rights reserved.
//

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int ProblemasRango3()
{
    time_t t1, t2;
    int numero, numero2, solucion, respuesta, puntos=0, NumProblemas=0, diferencia=0, problemas;
    t1 = time(NULL);
    problemas = rand() % 3;
    while (NumProblemas<5)
    {
        t2=time(NULL);
        diferencia=difftime(t2, t1);
        if (diferencia>=60) { NumProblemas=5; }
        else
        {
            switch(problemas) {
                case 0 :
                srand((unsigned) time(NULL));
                           numero2 = rand() % 500;
                           numero = rand() % 300;
                           solucion = numero + numero2 ;
                           printf("\t%i + %i = ", numero, numero2);
                           scanf("%i", & respuesta);
                           if (respuesta == solucion) {puntos ++; NumProblemas++;}
                           else if (respuesta!=solucion) { NumProblemas++; }
            break;
                case 1 :
               srand((unsigned) time(NULL));
                                      numero2 = rand() % 100;
                                      numero = rand() % 50;
                                      solucion = numero * numero2 ;
                                      printf("\t%i x %i = ", numero, numero2);
                                      scanf("%i", & respuesta);
                                      if (respuesta == solucion) {puntos ++; NumProblemas++;}
                                      else if (respuesta!=solucion) { NumProblemas++; }
                case 2 :
                    srand((unsigned) time(NULL));
                                                        numero2 = rand() % 100;
                                                        numero = rand() % 50;
                                                        solucion = numero / numero2 ;
                                                        printf("\t%i x %i = ", numero, numero2);
                                                        scanf("%i", & respuesta);
                                                        if (respuesta == solucion) {puntos ++; NumProblemas++;}
                                                        else if (respuesta!=solucion) { NumProblemas++; }
            }
        }
   }
    printf("Tu puntaje es %i\n", puntos);
    return puntos;
    }
