#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int Age ;
    bool tabl1[6] = {Age > 0 && Age < 3 , Age >= 3 && Age < 15 , Age >= 15 && Age < 20 , Age >= 20 && Age < 35 , Age >= 35 && Age < 65 , Age >= 65};

    printf("Veuillez entrer votre age :");
    scanf("%d",& Age);

    /*
    tabl1[0] = bebe ;
    tabl1[1] = enfant ;
    tabl1[2] = adolescent ;
    tabl1[3] = jeune ;
    tabl1[4] = mature ;
    tabl1[5] = vieux ;
    */

    if(tabl1[0] = true){
        printf("La tranche de votre age est : bebe");
    }
    if(tabl1[1] = true){
        printf("La tranche de votre age est : enfant");
    }
    if(tabl1[2] = true){
        printf("La tranche de votre age est : adolescent");
    }
    if(tabl1[3] = true)
        printf("La tranche de votre age est : jeune");
    }
   if(tabl1[4 = true]){
        printf("La tranche de votre age est : mature");
    }
    if(tabl1[5] = true){
        printf("La tranche de votre age est : vieux");
    }

    return 0;
}
