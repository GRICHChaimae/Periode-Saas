#include <stdio.h>
#include <stdlib.h>

int puissance(int N){
        int P ;

        P = N * N ;

        return P;
}



int main()
{
    int C , D ;

    printf("Veuillez saisir la valeure de N :");
    scanf("%d",& C);

    D = puissance(C);

   printf("la puissance de %d est %d ",C,D);

    return 0;
}
