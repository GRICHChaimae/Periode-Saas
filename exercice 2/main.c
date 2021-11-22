#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A , B ;

    printf("Veuillez entrer un entier A:");
    scanf("%d",& A);

    printf("Veuillez entrer un entier B:");
    scanf("%d",& B);

    if(A > B){
        printf("L'entier le plus grand est A = %d:",A);
    }
    if(A < B){
        printf("L'entier le plus grand est B = %d:",B);
    }
    else printf("Les deux entiers sont egaux");

    return 0;
}
