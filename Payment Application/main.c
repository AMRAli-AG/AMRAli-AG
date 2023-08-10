#include "card.h"
#include "card.c"
#include"terminal.h"
#include"terminal.c"
#include"server.h"
#include"server.c"


int s ;
int main()
{

    ST_cardData_t cardData;
    ST_terminalData_t termDate;



    EN_cardError_t  name  = getCardHolderName(&cardData);
    printf ("------------------------------ \n");
    EN_cardError_t  PAN   = getCardPAN (&cardData);
    printf ("------------------------------ \n");
    EN_cardError_t  date  =  getCardExpiryData (&cardData);
    EN_terminalError_t MaxAmount= setMaxAmount(&termDate);
    printf ("------------------------------ \n");
    EN_terminalError_t TransactionDate =  getTransactionDate(&termDate);
    printf ("------------------------------ \n");
    EN_terminalError_t CardExpired  =  isCardExpired(&cardData,&termDate);
    printf ("------------------------------ \n");
    EN_terminalError_t Amount = getTransactionAmount(&termDate);
    printf ("------------------------------ \n");
    EN_terminalError_t maxamount = isBelowMaxAmount     (&termDate);
    printf ("------------------------------ \n");
    EN_serverError_t accountstate = isValidAccount(&cardData, &accountRefrence);
    printf ("------------------------------ \n");
    EN_serverError_t Blockedaaccount = isBlockedAccount(&accountRefrence );
    printf ("------------------------------ \n");
    EN_serverError_t amountavailabl =  isAmountAvailabl(&termDate, &accountRefrence);




}
