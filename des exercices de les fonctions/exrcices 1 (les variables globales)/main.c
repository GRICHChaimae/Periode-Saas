#include <stdio.h>
#include <stdlib.h>

float A , B ;

// La fonction saisi : pas de retour pas des arguments
void saisi(){
    printf("Veuillez entrer deux nombre A et B :");
    scanf("%f%f",& A , & B );

}

void meme_signe(){

     if( A*B > 0 ){
        printf("Les deux nombres A et B ont le meme signe \n \n");
     }else if ( A*B < 0){
        printf("Les deux nombres A et B ont des signes differents \n \n");
     }else printf("Un de ces deux nombres est nul \n \n");

}

float Le_minimum(){

      float min ;

      min = A ;

      if(B < A)
         min = B ;

     return min ;
}

float Le_maximum(){

      float max ;

      max = A ;

      if(B > A)
         max = B ;

     return max ;
}


int main()
{
    saisi();
    meme_signe(A , B);

    printf("Le minimum de ces deux nombres est %2.f \n \n",Le_minimum(A , B));
    printf("Le maximum de ces deux nombres est %2.f",Le_maximum(A , B));




    return 0;
}

