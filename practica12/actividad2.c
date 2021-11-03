#include <stdio.h>

void cat(int n);

int main()
{

    cat(10);

    return 0;
}

void cat(int num)
{
    printf("New: %d \n", num);
    if(num % 2 == 0)
    {
        num--;
    }
    printf("\t%d \n", num);
    if(num > 0)
    {
        cat(num - 2);
        printf("%d \n", num);
    }

}
