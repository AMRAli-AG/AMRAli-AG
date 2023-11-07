#include <stdio.h>
#include <stdlib.h>
int num1,num2,num3;

int main()
{
    printf("please enter nums ");
    scanf("%i%i%i",&num1, &num2, &num3);
    if (num1>num2&&num1>num3)
    {
        printf  ("%i",num1);
    }
    else if (num2>num1&&num2>num3)
    {
        printf ("%i",num2);

    }
     else if (num3>num2&&num3>num1)
    {
        printf ("%i",num3);
    }
    return 0;
}
