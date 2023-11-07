#include <stdio.h>
#include <stdlib.h>
#include "motor.h"
int num2=0 ;

int main()
{

    //MoveMotorForward ();
    MoveMotorBackward ();
    MoveMotorLeft ();
    MoveMotorRight();

    num2=GetMotor_SW_Version();

    printf("%i",num2);
    SetMotorSpeed(20);
    return 0;
}

