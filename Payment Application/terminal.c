#include"terminal.h"



EN_terminalError_t getTransactionDate   (ST_terminalData_t *termDate)
{

    // Get the current time
    time_t currentTime;
    time(&currentTime);

    // Convert the time to a local time struct
    struct tm *localTime = localtime(&currentTime);

    // Extract individual components of the date
    int day = localTime->tm_mday;
    termDate-> transactionData[0]= localTime->tm_mon + 1; // Months are zero-based, so we add 1
    termDate-> transactionData[1]= localTime->tm_year -100; // Years are years since 1900

    // Print the date
    printf("Transaction Date: %02d/%02d/%d\n", day, termDate-> transactionData[0], termDate-> transactionData[1]+2000);




}
EN_terminalError_t isCardExpired     (ST_cardData_t *cardData ,ST_terminalData_t *termDate){



    if(cardData->cardExpirationData[1]>termDate-> transactionData[1])
    {

        printf("date of your card is | %i / %i |and valid card \n  ",cardData->cardExpirationData[0],cardData->cardExpirationData[1]);

        return CARD_OK ;

    }
    else if(cardData->cardExpirationData[1]<termDate-> transactionData[1])
    {

        printf("date of your card is | %i / %i | and expired card  \n ",cardData->cardExpirationData[0],cardData->cardExpirationData[1]);

        return WRONG_EXP_DATA;


    }
    else if(cardData->cardExpirationData[1]=termDate-> transactionData[1]&&cardData->cardExpirationData[0]>termDate-> transactionData[2])
    {

        printf("date of your card is | %i / %i | and valid card  \n ",cardData->cardExpirationData[0],cardData->cardExpirationData[1]);

        return CARD_OK ;
    }
    else if((cardData->cardExpirationData[1]=termDate-> transactionData[1])&&(cardData->cardExpirationData[0]<termDate-> transactionData[2]))
    {

        printf("date of your card is | %i / %i | and expired card  \n ",cardData->cardExpirationData[0],cardData->cardExpirationData[1]);

        return WRONG_EXP_DATA;
    }










}


EN_terminalError_t getTransactionAmount (ST_terminalData_t *termDate)
{
    printf("pleas transaction amount: \n=>");
    scanf ("%i",&(termDate->transAmount));


    if((termDate->transAmount)<=0)
    {
        printf("invalid amount\n");
        return INVALID_AMOUNT ;
    }
    else
    {
        printf("valid amount\n");


        return TERMINAL_OK ;
    }


}
EN_terminalError_t isBelowMaxAmount     (ST_terminalData_t *termDate)
{



    if((termDate->transAmount)>(termDate->maxTransAmount))
    {

        printf("thes amount larger then the terminal max allowed amount\n");
        printf("max  transaction amount %i$\n",(termDate->maxTransAmount));

        return EXCEED_MAX_AMOUNT ;
    }
    else
    {
        printf("ok\n ");
        return TERMINAL_OK;
    }



}
EN_terminalError_t  setMaxAmount         (ST_terminalData_t *termDate){


     termDate->maxTransAmount = 10000;


}





