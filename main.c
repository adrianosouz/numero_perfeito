#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"
int main()
{
    int num, i;
    printf("digite um numero\n");
    num = GetInt();
        for(i = 1 ; i <= num; i++ )
    if(num % i  == 0){
        printf("%d\n",i);

    }
    return 0;
}
