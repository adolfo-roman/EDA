#include <stdio.h>

int times = 0, arr[8] = {}, hold = 0;

int main()
{
  int s = 0, m = 1, m2 = 0, opcion = 0, opcion2 = 0;

  if(hold == 6){return 0;}

  while((opcion < 1 || opcion > 6) && times != 0)
  {
    printf("1) Ingresar o modificar los elementos de un arreglo\n");
    printf("2) Mostrar la suma de los elementos\n");
    printf("3) Realizarla multiplicación de los elementos\n");
    printf("4) Realizar la suma solo de los elementos divisibles entre 3\n");
    printf("5) Multiplicar por 3 cada elemento del arreglo\n");
    printf("6) Salir del programa\n");
    printf("\n");

    scanf("%d",&opcion);

    hold = opcion;

    }

  opcion = hold;

  times == 0 && opcion != 6? opcion = 1 : opcion;


  if(opcion == 1)
  {

    if(times != 0)
    {
      do
      {
        printf("1) Crear un nuevo arreglo\n");
        printf("2) Modificar elementos del arreglo\n");

        scanf("%d", &opcion) ;
      }
      while(opcion < 1 || opcion > 2);
    }

    times = 1;

    if(opcion == 1)
    {

      printf("Ingrese los elementos del nuevo arreglo separados por un enter\n");

      for (int i = 0 ; i < 8 ; i++)
      {
        scanf("%d",&arr[i]);
      }

      printf("Su arreglo es: ");

      for (int i = 0 ; i < 8 ; i++)
      {
        printf("[%d] ", arr[i]);
      }

      printf("\n");
      printf("\n");

      opcion = 0;

      main();
    }
    else
    {
      printf("Su arreglo es: \n");
      for (int i = 0 ; i < 8 ; i++)
      {
        printf("[%d] ", arr[i]);
      }
      printf("\n");
      for (int i = 0 ; i < 8 ; i++)
      {
        printf("(%d) ", i);
      }

      printf("\n");

      int z;

      do
      {
        int x;
        int y;

        printf("Ingrese elemento a modificar: \n");

        scanf("%d", &x);

        printf("Ingrese nuevo valor del elemento: \n");

        scanf("%d", &arr[0+x]);

        printf("Desea modificar algun otro valor? 1) Si, 2) No \n");

        scanf("%d", &z);
      }
      while(z != 2);
    }

     printf("Su nuevo arreglo es: \n");
      for (int i = 0 ; i < 8 ; i++)
      {
        printf("[%d] ", arr[i]);
      }

      printf("\n");
      printf("\n");

    opcion = 0;

    main();

  }

    for (int i = 0 ; i < 8 ; i++)
    {
       s += arr[i];
       m *= arr[i];

       if(arr[i] % 3 == 0)
       {
         m2+= arr[i];
       }
    }
    hold = 0;
    switch(opcion)
    {
      case 2:
        printf("Suma: %d \n", s);
        printf("\n");
        main();

      case 3:
        printf("Multiplicacion: %d \n", m);
        printf("\n");
        main();

      case 4:
        printf("Suma / 3: %d \n", m2);
        printf("\n");
        main();

      case 5:
        printf("Su arreglo * 3 es: ");
        for (int i = 0 ; i < 8 ; i++)
        {
          printf("[%d] ", arr[i]*3);
        }
        printf("\n");
        printf("\n");
        main();

      case 6:

        return 0;

    }
};