#include<stdio.h>
int i=0;
void move(char a,char b)
{
    printf("Step %d:%c -> %c\n",++i,a,b);
}
void hanoi(int n,char one,char two,char three)
{
    if(n==1)
        move(one,three);
    else
    {
        hanoi(n-1,one,three,two);
        move(one,three);
        hanoi(n-1,two,one,three);
    }
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    if(n>0&&n<=10)
    {hanoi(n,'A','B','C');}
    return 0;
}