#include <stdio.h>
#include <stdlib.h>

#include "func_aux_a3.c"
#include "listacd_structs.c"
#include "listacd_functions.c"

int main()
{
    List *myList = createList();
    int option;

    do
    {
        option = mainMenuList(myList);

        switch(option)
        {
            case 1:
                addFirstOrLast(myList, first);
                break;

            case 2:
                addFirstOrLast(myList, last);
                break;

            case 3:
                addith(myList);
                break;

            case 4:
                rmFirstOrLast(myList, first);
                break;

            case 5:
                rmFirstOrLast(myList, last);
                break;

            case 6:
                print_list(myList);
                break;

            default:
                break;
        }
    }
    while(option != 7);

    printf("Goodbye!\n");

    return 0;
}