#include<stdio.h>
char list[10][2];
char putIn()
{   
    for(int i=0;i<10;i++)
        for(int j=0;j<2;j++)
            scanf("%c %c",&list[i][j]);
    return list;
}


int main()
{
    putIn();
    for(int i=0;i<10;i++)
        for(int j=0;j<2;j++)
            printf("%c %c\n",list[i][j]);
    return 0;
}