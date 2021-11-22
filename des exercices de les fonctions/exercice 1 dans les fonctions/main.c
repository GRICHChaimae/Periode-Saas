#include <stdio.h>
#include <stdlib.h>

void meme_signe(float A , float B ){

     if( A*B > 0 ){
        printf("Les deux nombres A et B ont le meme signe \n \n");
     }else if ( A*B < 0){
        printf("Les deux nombres A et B ont des signes differents \n \n");
     }else printf("Un de ces deux nombres est nul \n \n");

}

float Le_minimum(float A , float B){

      float min ;

      min = A ;

      if(B < A)
         min = B ;

     return min ;
}

float Le_maximum(float A , float B){

      float max ;

      max = A ;

      if(B > A)
         max = B ;

     return max ;
}


int main()
{
    float A , B ;

    printf("Veuillez entrer deux nombre A et B :");
    scanf("%f%f",& A , & B );

    meme_signe(A , B);

    printf("Le minimum de ces deux nombres est %2.f \n \n",Le_minimum(A , B));
    printf("Le maximum de ces deux nombres est %2.f",Le_maximum(A , B));




    return 0;
}
