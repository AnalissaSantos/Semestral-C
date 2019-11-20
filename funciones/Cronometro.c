#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int Cronometro(void)
{
   time_t t1, t2;
   double diferencia = 0;
   
   int minutos;
   int segundos = 0;
    int temp = 0;
   
   t1 = time(NULL); /* obtener tiempo 1 */

   while (diferencia < 5){
      t2 = time(NULL); /* obtener tiempo 2 */
      
      diferencia = difftime(t2, t1);
      minutos = diferencia / 60.0;
      segundos = diferencia - minutos * 60;
      
        if (temp != segundos){ /* ha transcurrido un segundo */
            temp = segundos; /* guarda el valor previo */
         printf("%02d:%02d\n", minutos, segundos);
        }
   }
   return 0;
    
}
