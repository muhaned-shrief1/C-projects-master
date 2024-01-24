#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    float a=0;
    float b=0;
    printf("Enter operator ");
    scanf("%c",&c);
    printf("Enter 2 operands: ");
    scanf("%f",&a);
    scanf("%f",&b);
    switch(c){
case '+':
    printf("%.2f + %.2f =%.2f",a,b,a+b);
    break;
case '-':
    printf("%.2f - %.2f =%.2f",a,b,a-b);
    break;
    case '*':
    printf("%.2f * %.2f =%.2f",a,b,a*b);
    break;
    case '/':
    printf("%.2f / %.2f =%.2f",a,b,a/b);
    break;

    }
    return 0;
}
