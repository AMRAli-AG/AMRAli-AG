#include <stdio.h>
#include <stdlib.h>
unsigned int num[6]= {11,22,33,44,55,66};
unsigned int *ptr=NULL;

int main()
{
    ptr=&num[0];
    printf("addres=0x%x\t----value=%i\n",ptr,*ptr);
    ptr+=1;
    printf("addres=0x%x\t----value=%i\n",ptr,*ptr);
    ptr+=1;
    printf("addres=0x%x\3t----value=%i\n",ptr,*ptr);
    printf("addres=0x%x\t----value=%i\n",ptr,*ptr);
    ptr+=1;
    printf("addres=0x%x\t----value=%i\n",ptr,*ptr);
    ptr+=1;
    printf("addres=0x%x\t----value=%i\n",ptr,*ptr);
    printf("----------------------------\n");
    ptr-=1;
    printf("addres=0x%x\t----value=%i\n",ptr,*ptr);
    ptr-=1;

    printf("addres=0x%x\t----value=%i\n",ptr,*ptr);
    ptr-=1;
    printf("addres=0x%x\t----value=%i\n",ptr,*ptr);
    ptr-=1;
    printf("addres=0x%x\t----value=%i\n",ptr,*ptr);







    return 0;
}
