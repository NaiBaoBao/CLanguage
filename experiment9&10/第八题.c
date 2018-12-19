//
//  main.c
//  ex
//
//  Created by lin geng on 12/19/18.
//  Copyright © 2018 lin geng. All rights reserved.
//T8
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void input(char *str[], int n);        //定义输入函数
void sort(char *str[], int n);         //定义排序函数
void print(char *str[], int n);        //定义输出函数
int main()
{
    char *string[10];
    int i;
    for (i=0; i<10; string[i++]=(char *)malloc(80*sizeof(char)));  //给指针数组分配空间
    input(string, 10);                 //调用输入函数
    sort(string, 10);                  //调用排序函数
    print(string, 10);                 //调用输出函数
    return 0;
}
//输入函数
void input(char *str[], int n)
{
    int i;
    for (i=0; i<n; i++){
        printf("Please enter No.%d string: ", i+1);
        scanf("%s", str[i]);
    }
}
//输出函数
void print(char *str[], int n)
{
    int i;
    for (i=0, printf("Sort by:\n"); i<n; printf("%s\n", str[i++]));
}
//排序函数
void sort(char *str[], int n)
{
    char *temp;
    int i, j;
    for (i=0; i<n; i++)
        for (j=i+1; j<n; j++)
            if (strcmp(str[i], str[j])>0){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
}

