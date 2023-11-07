#include <stdio.h>
#include <stdlib.h>

unsigned x ;

int main()
{
    printf("entar valu of x");
    scanf("%i",&x);

    if (x>50)
    {
        printf("a");
    }
    else if (x>20)
    {
        printf ("b");

    }
    else
    {
        printf("c");
    }
    return 0;
}
