#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[5];
    int P , i , j;

    printf("Veuillez saisir 5 nombre");
    j = 0 ;
    do{
        scanf("%d",& tab[j]);
        j++;
    }while (j<5);

    P = 0 ;
    for ( i = 0 ; i < 5 ; i++){
        if (tab[i] % 2 == 0 ){
         P = P + 1 ;
        }
    }

    printf("Vous avez taper %d nombre paire \n",P);
    printf("Vous avez taper %d nombre impaire",5-P);



    return 0;
}
