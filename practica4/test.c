#include <stdio.h>
#include <stdlib.h>

char *get_string(char *text);

int main()
{
    /*char *ptr = (char *) malloc(sizeof(char *) * 20);
    char *ptr2 = NULL;
    //char *apellido = get_string_max("Apellido: ", 5);

    for (int i = 0; i < i + 1 ; i++)
    {
        printf("%d\n", i);

        if(ptr[i] == '\0')
        {
            printf("Not really empty!\n");;
        }
        else if(ptr2[i] == '\0')
        {
            break;
        };
    }

    printf("Got it!\n");

    for (int i = 0; i < 20 ; i++)
    {
        ptr[i] = i + 33;
        printf("%d) %c\n", i, *ptr+i);
    }

    for (int i = 0; i < 20 ; i++)
    {
        //printf("Hola :)\n");
        ptr[i] = '\0';
        printf("%d) %d\n", i, (int)&ptr[i]);
    }*/

    char *str = get_string("Texto: ");

    int i;

    for(i = 0; i < i + 1; i++)
    {
        if(str[i] == 0)
        {
            break;
        }
    }

    printf("Su texto ptr fue: %s\n", str);
    printf("La longitud fue: %d caracteres\n", i);

    free(str);
    /*char *str2 = NULL;

    printf("Texto ptr2: %s\n", str2);

    for(int j = 0; j < i; j++)
    {
        str[j] = 0;
    }*/

    printf("Su texto fue: %s\n", str);

    return 0;
}

char *get_string(char *text)
{
    printf("%s", text);
    char c, *str = (char *) malloc(sizeof(char *) * 1);
    int strIndex = 0;

    do
    {
        c = getchar();

        if (c == '\n')
        {
            break;
        }

        str[strIndex] = c;
        strIndex++;

        str = (char *) realloc(str, strIndex + 1);
    }
    while (1);

    return str;
}


