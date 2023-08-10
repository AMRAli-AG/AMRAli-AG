#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>


typedef struct ST_cardData_t
{
uint8_t cardHolderName[25];
uint8_t primaryAccountNumber[20];
uint8_t cardExpirationData[2];

}ST_cardData_t;
typedef enum EN_cardError_t
{

    CARD_OK,WRONG_NAME, WRONG_EXP_DATA, WRONG_PAN

}EN_cardError_t;

EN_cardError_t getCardHolderName(ST_cardData_t *cardData);//DONE
EN_cardError_t getCardExpiryData(ST_cardData_t *cardData);//DONE
EN_cardError_t getCardPAN (ST_cardData_t *cardData);//DONE
#endif

