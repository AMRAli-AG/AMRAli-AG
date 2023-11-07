#include <stdio.h>
#include <stdlib.h>
#define max_size 10

unsigned int num1 = 3;
unsigned int num2 = 4;
unsigned int array1[max_size]= {2,5,6,1,6,3,8,0,9,7};
void swap_two_numbers(unsigned int *p1, unsigned int *p2);
void execute_bubble_sort (unsigned int my_array[],unsigned int array_lenth);
void print_my_data (unsigned int my_array[],unsigned int array_lenth);



int main()
{


    print_my_data (array1,max_size);
    execute_bubble_sort (array1,max_size);
    print_my_data (array1,max_size);





    return 0;
}
void swap_two_numbers(unsigned int *p1, unsigned int *p2)
{
    unsigned int temp = *p1;
    *p1=*p2;
    *p2=temp;
}


void execute_bubble_sort (unsigned int my_array[],unsigned int array_lenth)
{
    unsigned int BS_intration ,x = 0;
    for(BS_intration=0; BS_intration<array_lenth-1;BS_intration++){
        for(x =0 ;x<array_lenth-1-BS_intration;x++){
                if(array1[x]> array1[x+1]){
                    swap_two_numbers(&array1[x],&array1[x+1]);
                }


        }

          print_my_data (my_array,array_lenth);


    }




}
void print_my_data (unsigned int my_array[],unsigned int array_lenth)
{
    unsigned int counter = 0;
    for(counter = 0 ; counter<array_lenth; counter++ )
    {

        printf("%i\t",my_array[counter]);
    }

    printf("\n");



}

