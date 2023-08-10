#ifndef TERMINAL_H_INCLUDED
#define TERMINAL_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include "card.h"





typedef struct ST_terminalData_t
{
   unsigned int long transAmount ;
   unsigned int long   maxTransAmount ;
   uint8_t   transactionData[2] ;

}ST_terminalData_t;


typedef enum EN_terminalError_t
{

    TERMINAL_OK, WRONG_DATE, EXPIRED_CARD, INVALID_AMOUNT, EXCEED_MAX_AMOUNT, INVALID_MAX_AMOUNT

}EN_terminalError_t ;

EN_terminalError_t getTransactionDate   (ST_terminalData_t *termDate);//DONE
EN_terminalError_t isCardExpired        (ST_cardData_t *cardData ,ST_terminalData_t *termDate);//DONE
EN_terminalError_t getTransactionAmount (ST_terminalData_t *termDate);//DONE
EN_terminalError_t isBelowMaxAmount     (ST_terminalData_t *termDate);//DONE
EN_terminalError_t setMaxAmount         (ST_terminalData_t *termDate);//DONE
EN_terminalError_t isValidCardPAN       (ST_cardData_t *cardData);

#endif

