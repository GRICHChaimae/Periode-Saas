#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A ;

    printf("Veuillez taper un chiffre : ");
    scanf("%f", & A);

    if (A > 0){
        printf("Le chiffre est positive");
    }
    else if (A < 0){
        printf("Le chiffre est negative");
    }
    else printf("Le chiffre est nul");

    return 0;
}
