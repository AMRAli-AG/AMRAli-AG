#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#pragma(2)
typedef struct  student {

    unsigned int id;
    unsigned int *prt;

    char name [100];
    char address[100];
    float age;


}stydent_t;

stydent_t ali;
struct student amr ={"amr ali","france",122.32,213223};
int main()
{
    unsigned int *prt;
      printf("   avd   %i\n",sizeof(*prt));
      //printf("sadvs      %i\n",sizeof( name));
      printf("  dv    %i\n",sizeof(amr.address));
      printf("  vdds    %i\n",sizeof(amr.age));
      printf("  ssdv    %i\n",sizeof(amr.id));
    int swenamr[28];

    printf("amr address=%s\n",amr.address);
    printf("amr age=%0.2f\n",amr.age);
    printf("amr id=%i\n",amr.id);
    memset(swenamr,'3',24);
    memcpy( swenamr,"alialiali",9);
     printf("amr name=%s\n", swenamr);






    return 0;
}
