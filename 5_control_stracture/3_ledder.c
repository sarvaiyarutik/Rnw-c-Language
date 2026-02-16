

#include <stdio.h>

int main(){


    int Choice;

    printf("Enter your  price:");
    scanf("%d",&Choice);

    if (Choice < 100)
    {
        printf("Tea, Bhungala Bateta, Samocha, Lassi ");
    }

    else if (Choice < 150){
        printf("Dal puri ,Butter Pav Bhaji ,Steamed Idli");
    }

    else if (Choice < 200){
        printf("Dosa ,MOM’S ");
    }

     else if (Choice < 300){
        printf("Pizza");
    }

    else {
        printf("invalid choice");
    }
   

    return 0;
}