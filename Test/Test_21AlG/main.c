#include <stdio.h>
#include <stdlib.h>
#define max_size 8
unsigned int array1[max_size]={11,22,33,44,55,66,77,88};
unsigned int x=0;
unsigned int counter=0;


int main()
{
    printf("please enter element \n");
    scanf("%i",&x);
    for(counter=0;counter<=max_size;counter++){

        if(x==array1[counter]){
            printf("we fount the element in %i --- and value = %i \n",counter,x);
            break;
        }

        else{
            printf("not found in %i\n",counter);
        }


    }


    return 0;
}
