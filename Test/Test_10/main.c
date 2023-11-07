#include <stdio.h>
#include <stdlib.h>

unsigned int num1 =55;
unsigned int num2=66;
unsigned int *prt1 ;
unsigned int *prt2 ;

void swwap_nums (unsigned int num1,unsigned int num2);

int main()
{
    swwap_nums ( num1, num2);

    return 0;
}
void swwap_nums (unsigned int num11,unsigned int num22){
    prt1= &num11;
     printf("num111=%i\t ",*prt1);
    prt2=&num22;
     printf("num111=%i\t ",*prt2);
    num22=*prt1;
    printf("num111=%i\t ",*prt1);
    num11=*prt2;
    printf(" num222=%i",*prt1);



}
