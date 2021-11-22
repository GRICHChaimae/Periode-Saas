#include <stdio.h>
#include <stdlib.h>

/* Exercice 2 :
Écrire un programme qui permet de remplir un tableau avec des flottants (floats),
et créer ensuite une fonction(avec des paramètres) qui permet de chercher un élément dans dans ce tableau.
L'élément à chercher est saisi par l’utilisateur, donc il a ffiche Trouvé ou Nontrouvé et affiche le tableau trié */

    float tab[8];
    int i , j , c ;

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
    printf("Veuillez remplire un tableau de 8 chiffres :");
    for(i = 0 ;i < 8; i++){
        scanf("%f", & tab[i]);
    }

    printf("Veuillez chercher a un element :");
    scanf("%f",& N);

    f_chercher(N);


    return 0;
}
