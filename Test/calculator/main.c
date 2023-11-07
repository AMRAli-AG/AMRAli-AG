#include <stdio.h>
#include <stdlib.h>
char op;
int num1,num2,r;


int main()
{
    printf("please enter op");
    scanf("%c", &op);
    printf("please enter num1 and num2");
    scanf("%i %i", &num1, &num2);
    switch(op)
    {
    case'+':
        r=num1+num2;
        printf("%i",r);
        break;
    case'*':
        r=num1*num2;
        printf("%i",r);
        break;
    case'/':
        r= num1/num2;
        printf("%i",r);
        break;




    }

    return 0;
}
