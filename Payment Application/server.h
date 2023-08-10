#ifndef SERVER_H_INCLUDED
#define SERVER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>
#include "card.h"
#include "terminal.h"




typedef enum EN_transState_t
{

    APPROVED, DECLINED_INSUFFECIENT_FUND, DECLINED_STOLEN_CARD, FRAUD_CARD,  INTERNAL_SERVER_ERROR
}EN_transState_t;


typedef struct ST_transactin_t
{
    ST_cardData_t      cardHolderData;
    ST_terminalData_t  terminalData;
    EN_transState_t    transState;
    uint32_t           transactionSequenceNumber;

} ST_transactin_t;
extern ST_cardData_t   card ;
extern ST_cardData_t   termDate ;


typedef enum EN_serverError_t
{

    SERVER_OK, SERVER_FAILED, TRANSACTION_NOT_FOUND, ACCOUNT_NOT_FOUND, LOW_BALANCE, BLOCKED_ACCOUNT

}EN_serverError_t;

typedef  enum EN_accountState_t
{
    RUNNING,
    BLOCKED

}EN_accountState_t;


typedef struct ST_accountDB_t
{
   int balance;
     int state ;
    uint8_t primaryaccountnumber[20];


} ST_accountDB_t;



EN_transState_t  recieveTransactinData(ST_transactin_t *transData);
EN_serverError_t isValidAccount (ST_cardData_t *card, ST_accountDB_t *accountRefrence);//done
EN_serverError_t isBlockedAccount(ST_accountDB_t *accountRefrence );//done
EN_serverError_t isAmountAvailabl(ST_terminalData_t *termDate, ST_accountDB_t *accountRefrence);//done
EN_serverError_t saveTransaction(ST_transactin_t *transData);




#endif
