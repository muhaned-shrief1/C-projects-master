#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a=0,b=0,c=0;
    printf("Enter three numbers: ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if(a>b&&a>c){
        printf("%.2f is the largest",a);
    }
  if(b>a&&b>c){
        printf("%.2f is the largest",b);
    }
    if(c>b&&c>a){
        printf("%.2f is the largest",c);
    }
    return 0;
}
