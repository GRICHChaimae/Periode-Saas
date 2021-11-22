#include <stdio.h>
#include <stdlib.h>

int i , j , c , tab[8];

void saisi(){

    printf("Veuillez entre les 8 nombres de tableau : \n");

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

int main()
{

   saisi();

   system("cls");

   trie();

    return 0;
}
