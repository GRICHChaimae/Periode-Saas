#include <stdio.h>
#include <stdlib.h>
//Exercice 1 :
//Écrire un programme en C qui permet à l’utilisateur de saisir des entiers positifs.
//Une fois un nombre négatif est saisi le programme sarrête en affichant la liste des entiers positifs précédents.

int main()
{
    int N , i , tab[100] ;

    printf("Combien de nombres positifs vous voulez saisir :");
    scanf("%d",& N );

    printf("Veuillez saisir %d entiers positifs :",N);

    for(i = 0 ; i < N ; i++){

       scanf("%d",& tab[i]);

       if(tab[i] < 0)
          break ;

    }

    N = i;
    printf("Les nombres positif que vous avez taper avant le chiffre negatif : ");

    for(i = 0 ; i < N ; i++){

       printf("%d \t",tab[i]);

    }

    return 0;
}
