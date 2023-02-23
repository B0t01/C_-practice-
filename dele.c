#include <stdio.h>
#include <conio.h>

int main(){

    int A ,B,C,D = 0;
    printf("Enter a number :");
    scanf("%d",& A);
    C = A;
    while(C>0){
        B = C%10;
        D = (D*10) +B;
        C = C/10;
    }

    if(D == A){
        printf("YEs this number is pallindrome");

    }
    else{
        printf("Boom not good");
    }

    return 0;

}
