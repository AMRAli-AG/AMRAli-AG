#include <stdio.h>
#include <stdlib.h>


FILE *my_file =0;
int read_student_name [20];
int main()
{
    int student_counter = 0;
    my_file = fopen(" student.txt","r");
    if(0 != my_file)
    {
        printf(" i can read file\n");
        fgets(read_student_name, 20,my_file);
        printf("data : %s ",read_student_name);






    }
    else
    {

        printf(" error");


    }
    return 0;
}
