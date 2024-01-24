#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    int sum=0;
    printf("Enter an integer: ");
    scanf("%d",&a);
    for(int counter=1;counter<=a;counter++){
      sum+=counter;
    }
    printf("Sum = %d",sum);
    return 0;
}
