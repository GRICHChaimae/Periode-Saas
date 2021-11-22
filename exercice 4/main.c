#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Age ;

    printf("Veuillez entrer votre age :");
    scanf("%d",& Age);

    if( Age > 0 && Age < 3){
        printf("La tranche de votre age est : bebe");
    }
    if( Age >= 3 && Age < 15 ){
        printf("La tranche de votre age est : enfant");
    }
    if( Age >= 15 && Age < 20 ){
        printf("La tranche de votre age est : adolescent");
    }
    if( Age >= 20 && Age < 35 ){
        printf("La tranche de votre age est : jeune");
    }
    if( Age >= 35 && Age < 65 ){
        printf("La tranche de votre age est : mature");
    }
    if( Age >= 65 ){
        printf("La tranche de votre age est : vieux");
    }


    return 0;
}
