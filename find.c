#include<stdio.h>
#include <ctype.h>
#include <string.h>
#include "maxWord.h"

int main()
{
    char a[500];
    gets(a);
    char *b="";
    b=findMax(a);
    printf("%s",b);
    return 0;
}