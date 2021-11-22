#include <stdio.h>
#include <stdlib.h>

int C ;
float A , B ;

void saisi(){

       do{
      printf("Veuiller choisir le genre de l'operation que vous voulez faire : \n");
      printf(" L'addition : 1 \t la substraction : 2 \t  la multiplication : 3 \t la division : 4 \n");
      printf("je choisi l'operation numero : ");
      scanf("%d",&C);
   }while( C != 1 && C != 2 && C != 3 && C != 4 );

   printf("Veuillez entrer deux chiffre :");
   scanf("%f%f",& A , & B);

}

void Scalc(){
   switch(C){
    case 1 : printf("%.2f + %.2f = %.2f",A ,B , A + B);
        break ;
     case 2 : printf("%.2f - %.2f = %.2f",A ,B , A - B);
        break ;
     case 3 : printf("%.2f * %.2f = %.2f",A ,B , A * B);
        break ;
     default :
     printf("%.2f / %.2f = %.2f",A ,B , A / B);
        break ;
   }

}
int main()
{


   saisi();
   Scalc();

    return 0;
}
