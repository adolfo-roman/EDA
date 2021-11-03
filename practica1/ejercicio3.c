#include <stdio.h>

int main (void)
{
    int c = 9, opcion = 0, mult = 1, sum = 0;
    int arr[9] = {};
    float fsum = 0;

    printf("Ingrese 9 elementos del en forma de 0 y 1 separado por enter: \n");

      for (int i = 0 ; i < c ; i++)
      {
        do
        {
            if(arr[i] != 0 && arr[i] != 1)
            {
                printf("inserte un 0 o un 1 para el elemento %d\n", i+1);
            }
            scanf("%d",&arr[i]);
        }
        while(arr[i] != 0 && arr[i] != 1);
      }

      printf("Su numero es: ");

      for (int i = 0 ; i < c ; i++)
      {
        printf("%d", arr[i]);
      }

      printf("\n");

    printf("Convertir arreglo a decimal como:\n");
    printf("1) Binario puro\n");
    printf("2) Punto fijo (6 bit entero y 3 bit decimal)\n");
    //printf("3) Representación de complemento a 2\n");

    scanf("%d", &opcion);

    switch(opcion)
    {
        case 1:

            for (int i = 0 ; i < 9 ; i++)
            {
                if(arr[i] == 1)
                {
                    for (int j = 0 ; j < -i+8  ; j++)
                    {
                        mult*= 2;
                    }

                    sum += mult;
                    mult = 1;
                }
                else
                {
                    sum += 0;
                }
            }

            printf("\nEl numero binario a decimal es: %d\n", sum);
            break;

        case 2:
            for (int i = 0 ; i < 9 ; i++)
                {
                    if(i < 5)
                    {
                        if(arr[i] == 1)
                        {
                            for (int j = 0 ; j < -i+5  ; j++)
                            {
                                mult*= 2;
                            }

                            fsum += mult;
                            mult = 1;
                        }
                        else
                        {
                            fsum += 0;
                        }
                    }
                    else
                    {
                        if(arr[i] == 1)
                        {
                            for (int j = 0 ; j < -i+8  ; j++)
                        {
                            mult *= 2;
                        }

                        fsum += (float)1/mult;
                        mult = 1;
                        }
                        else
                        {
                        fsum += 0;
                        }
                    }
                }
                printf("\nEl numero binario a decimal con punto fijo es:%.3f\n", fsum);
            break;


    }



}

