#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    int y=c;
    if(y>=65&&y<=90){
           printf("%c is an alphabet",c);
    }
    else  if(y>=97&&y<=122){
           printf("%c is an alphabet",c);
    }
    else{
      printf("%c is not an alphabet",c);
    }
    return 0;
}
