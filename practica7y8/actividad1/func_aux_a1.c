int get_int(char *text)
{

    char *str = (char*) malloc(sizeof(char));
    int strLength = 1, eval = 0, num = 0, i, ex = 1;
    char c;

    do
    {
        printf("%s", text);

        do
        {
            c = getchar();

            if (c == '\n' )
            {
                eval = 0;
                str[strLength - 1] = '\0';
                break;
            }
            else if(c < 48 || c > 57)
            {
                do
                {
                    c = getchar();
                }
                while(c != '\n');
                eval = 1;
                break;
            }

            str[strLength - 1] = c;
            strLength++;
            str = (char*) realloc(str, strLength);
        }
        while (1);

        if(eval == 1 || (str[0] == 48 && strLength > 2))
        {
            free(str);
            str = (char*) malloc(sizeof(char));
            strLength = 1;
            eval = 1;
        }
    }
    while(eval);

    for(i = 0 ; i < strLength - 2; i++)
    {
        ex *= 10;
    }

    for(i = 0 ; i < strLength - 1; i++)
    {
        num += ex * (str[i] - 48);
        ex = ex / 10;

    }

    return num;
}

void continuar(char* text)
{
    char a;

    printf("\n%s", text);

    do
    {
        a = getchar();
    }
    while(a != '\n');

    printf("\n");

    return;
}
