#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    int y=c;
    if(y>=65&&y<=90){
           printf("%c is consonant",c);
    }
    else{
      printf("%c is vowl",c);
    }
    return 0;
}
