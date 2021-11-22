#include <stdio.h>
#include <stdlib.h>

float cub(float A){

    float C ;

    C = A*A*A ;

    return C;

}

int main()
{
    float A ;

    printf("Ce programme calcule le cub d'un nombre reel \n");
    printf("Veuillez entrer un nombre :");
    scanf("%f",& A);

    printf("Le cub de %f est : %.2f",A,cub(A));


    return 0;
}
