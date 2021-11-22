#include <stdio.h>
#include <stdlib.h>

// exercice 2 :

int i , j , c , tab[8];

void saisi(){

    printf("Veuillez remplire un tableau de 8 chiffres : \n");

    for( i=0 ; i<8 ; i++){
        printf("tab[%d] = ",i+1);
        scanf("%d",& tab[i]);
    }

}

void trie(){

   for( j=1 ; j<=7 ; j++){
    for( i=0 ; i<7 ; i++)
        if ( tab[i] > tab[i+1] ) {
                c = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = c;
        }
    }

    printf("Le tableau trie : \n");
    for( i=0 ; i<8 ; i++){
     printf("tab[%d] = %d \n",i+1,tab[i]);
    }

}

void f_chercher(float N){

    int j=0;

    for(i = 0 ;i < 8; i++){

     if (tab[i] == N)
         j++;
    }
    if (j != 0)
        printf("trouve \n");
    else printf("Nontrouve \n");


}

int main()
{
    float N ;

   saisi();

    printf("Veuillez chercher a un element :");
    scanf("%f",& N);

   f_chercher(N);

   trie();

    return 0;
}
