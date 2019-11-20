#include <time.h>
#include <stdio.h>
#include <stdlib.h>
//
//int ProblemasRango1(void)
//{
//    int numero, numero2, solucion, respuesta, puntos=0, NumProblemas=0;
//    srand((unsigned) time(NULL));
//    do{
//    NumProblemas++;
//    numero2 = rand() % 10;
//    numero = rand() % 10;
//    solucion = numero + numero2 ;
//    printf("\t%i + %i = \n", numero, numero2);
//    Cronometro();
//    scanf("%i", & respuesta);
//    if (respuesta == solucion) {puntos ++;}
//    } while (NumProblemas<5);
//   return puntos;
//}
int ProblemasRango1()
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
    return puntos;
}
