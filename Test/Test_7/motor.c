#include"motor.h"
unsigned int num2 =12;
static int MoveMotorForward(void);

static int MoveMotorForward(void){

printf("MoveMotorForward\n");
}
void MoveMotorBackward(void){

 MoveMotorForward( );
 MoveMotorForward( );
 MoveMotorForward( );



}
void MoveMotorLeft(void){


printf("MoveMotorLeft\n");

}
void MoveMotorRight(void){

printf("MoveMotorRight\n");

}
unsigned int GetMotor_SW_Version(void){


    return num2;
}
void SetMotorSpeed(unsigned int MS){
    num2 =MS;

}
