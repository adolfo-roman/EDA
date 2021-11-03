#include <stdio.h>

void cat(int n);

int main()
{

    cat(10);
    
    return 0;
}

void cat(int num)
{
    if(num % 2 == 0)
    {
        num--;
    }
    
    if(num > 0)
    {
        printf("%d \n", num);
        cat(num - 2);
    }

}
