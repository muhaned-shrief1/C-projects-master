#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    int fact=1;
    printf("Enter an integer: ");
    scanf("%d",&a);
    if(a==0){
        printf("Factorial = 1");

    }
    else if(a<0){
        printf("Error!! doesn't exist");
    }
    else if(a>0){
        for(int i=1;i<=a;i++){
            fact*=i;
        }
        printf("Factorial = %d",fact);

    }
    return 0;
}
