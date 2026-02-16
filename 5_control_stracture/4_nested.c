

#include <stdio.h>


int main(){

    int age = 18;

    int DrivingLicence = 1;

    if (age<=18)
    {
       if (DrivingLicence == 0)
       {
          printf("you have driving");
       }

       else{
        printf("you have register");
       }
       
    }

    else{
        printf("you have not eligible driving ");
    }
    

    return 0;
}