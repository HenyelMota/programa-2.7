#include <stdio.h>

int main()
{
    float P, S, R;  // Declara las variables flotantes P, S y R para las ventas de los tres vendedores

    printf ("\nIngrese las ventas de los tres vendedores:  "); // Pide al usuario que ingrese las ventas de los tres vendedores
    scanf("%f %f %f", &P, &S, &R);                             // Lee tres valores flotantes del usuario y los asigna a P, S y R

    // Comienza la estructura condicional para determinar el orden de las ventas
    if(P > S)   // Si P es mayor que S
    {
        if(P > R)   // Si P es mayor que R
        {
            if(S > R)   // Si S es mayor que R
            {
                printf("\n\n El ordem es P, S y R: %8.2f %8.2f %8.2f", P, S, R); // Imprime el orden P, S, R
            }else   // Si R es mayor que S
            {
                printf("\n\n El ordem es P, R y S: %8.2f %8.2f %8.2f", P, R, S); // Imprime el orden P, R, S
            }
        }else   // Si R es mayor que P
        {
           printf("\n\n El orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S);     // Imprime el orden R, P, S
        }
    }else  // Si S es mayor que P
    {
      if(S > R)  // Si S es mayor que R
      {
          if(P > R)   // Si P es mayor que R
          {
             printf("\n\n El orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R);  // Imprime el orden S, P, R
          }else   // Si R es mayor que P
          {
             printf("\n\n El orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P); // Imprime el orden S, R, P
          }
      }else   // Si R es mayor que S
      {
         printf("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f", R, S, P);  // Imprime el orden R, S, P
      }
    }
    return 0;
}
