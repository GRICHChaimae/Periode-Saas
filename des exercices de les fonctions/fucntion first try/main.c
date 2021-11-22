#include <stdio.h>
#include <stdlib.h>

void puissance(int N){
        int P ;

        P = N * N ;

        printf("la puissance de %d est %d ",N,P);
}

int main()
{
    int C;

    printf("Veuillez saisir la valeure de N :");
    scanf("%d",& C);

    puissance(C);



    return 0;
}
