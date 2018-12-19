//
//  main.c
//  ex
//
//  Created by lin geng on 12/19/18.
//  Copyright © 2018 lin geng. All rights reserved.
//T5
#include<stdio.h>
char s1[100],s2[100];
char *p1,*p2;
int _strcmp(char *p1,char *p2){
    while(*p1||*p2){
        if(*p1!=*p2)
            return *p1-*p2;
        else{
            p1++;
            p2++;
        }
    }
    return 0;
}
int main()
{
    p1=s1;p2=s2;
    printf("输入两个字符串\n");
    scanf("%s %s",s1,s2);
    printf("%d\n",_strcmp(p1, p2));
    return 0;
}
