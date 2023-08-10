#include "server.h"

int index;
ST_accountDB_t accountRefrence[255] =
{
    // RUNNING = 1
    // BLOCKED = 0
    {162000, 1, "5170770054625604"},
    {127000, 0, "5170770054628566"},
    {191000, 1, "5170770054628061"},
    {1210000, 0, "5170770054625323"},
    {1490000, 1, "5170770054625745"},
    {1780000, 1, "5170770054621355"},
    {163000, 0, "5170770054623138"},
    {9000, 1, "5170770054626560"},
    {9000, 0, "5170770054627436"},
    {1220000, 1, "5170770054625638"},
    {150000, 0, "5170770054620720"},
    {1790000, 1, "5170770054625778"}
};





EN_serverError_t isValidAccount(ST_cardData_t *cardData, ST_accountDB_t *accountRefrence)
{
    unsigned int accountRefrenceCounter = 0 ;


    for ( accountRefrenceCounter = 0; accountRefrenceCounter < 30; accountRefrenceCounter++)
    {
        if (strcmp(accountRefrence[accountRefrenceCounter].primaryaccountnumber, cardData->primaryAccountNumber) == 0)
        {
            index=accountRefrenceCounter;
                printf("%i", index);
            printf(" Account found\n");

            return SERVER_OK;
        }
    }
    printf(" Account not found\n");


    return ACCOUNT_NOT_FOUND;
}
EN_serverError_t isBlockedAccount(ST_accountDB_t *accountRefrence ){
printf("%i\n",accountRefrence[index].state);
if (accountRefrence[index].state == 0){
    printf("BLOCKED ACCOUNT\n");
    return BLOCKED;
}
    printf("RUNNING ACCOUNT\n");

   return RUNNING;



}
EN_serverError_t isAmountAvailabl(ST_terminalData_t *termDate, ST_accountDB_t *accountRefrence){
printf("%i\n",accountRefrence[index].balance);
printf("%i\n",termDate->transAmount);


if( termDate->transAmount > accountRefrence[index].balance){

    printf("Low Balance");
      return LOW_BALANCE;
}
else{


    printf(" Balance");

      return SERVER_OK;

}


}



