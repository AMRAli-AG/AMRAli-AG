#include"card.h"

EN_cardError_t getCardHolderName(ST_cardData_t *cardData)
{
    int len;
    printf("pleas enter your name:  \n=>");
    gets(&(cardData->cardHolderName));


    len = strlen((cardData->cardHolderName));
    printf("Length of  is |%d|\n",  len);

    if(len<24 && len>20)
    {
        printf("wellcom %s \n",cardData->cardHolderName);

        return CARD_OK;

    }
    else
    {
        printf("invalid name\n");


        return WRONG_NAME;
    }






}
EN_cardError_t getCardExpiryData  (ST_cardData_t *cardData)
{
    unsigned int monthcard;
    unsigned int yearcard;

    printf("pleas enter month and year of card :  ->(month space year) \n=>");
    scanf("%i",&monthcard);
    scanf("%i",&yearcard);
    cardData->cardExpirationData[0] = monthcard;
    cardData->cardExpirationData[1] = yearcard;


}
EN_cardError_t getCardPAN (ST_cardData_t *cardData)
{

    unsigned int len2;


    printf("pleas enter PAN:   \n=>");

    scanf("%s",&(cardData->primaryAccountNumber));

    len2 = strlen((cardData->primaryAccountNumber));

    printf("Length of  is |%d|\n",  len2);

    if (len2<19 && len2>16){

        printf ("correct PAN \n");

        return CARD_OK ;

    }
    else {
        printf ("incorect PAN \n");
        return WRONG_PAN ;
    }

}




