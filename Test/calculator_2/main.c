#include <stdio.h>
#include <stdlib.h>
unsigned int x,y,r;
char op;
int main()
{
    printf("op");
    scanf("%c",&op);
    printf("nums");
    scanf("%i%i",&x,&y);
    if(op=='+')
    {
        r=x+y;
        printf("r=%i",r);
    }
    else if ('*'==op)
    {
        r=x*y;
        printf("r=%i",r);
    }
    else if (  '/'==op )
    {
        r=x/y;
        printf("r=%i",r);
    }
    return 0;
}
