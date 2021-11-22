#include <stdio.h>
#include <stdlib.h>

int main()
{
    float MAD , EURO , USD ;

    printf("Veulliez saisir le devise  en MAD : ");
    scanf("%f",& MAD);

    EURO = MAD / 10.45 ;
    USD = MAD / 9.11 ;

    printf("La conversion de MAD vers EURO est %.2f : ",EURO);
    printf("La conversion de MAD vers USD est %.2f : ",USD);

    return 0;
}
