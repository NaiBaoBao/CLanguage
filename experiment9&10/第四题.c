//
//  main.c
//  ex
//
//  Created by lin geng on 12/19/18.
//  Copyright © 2018 lin geng. All rights reserved.
//T3
#include<stdio.h>
int n;
void fun1(int num[100]){
    printf("数列倒序\n");
    for(int i=0;i<n;i++){
        printf("%d ",num[n-i-1]);
    }
    printf("\n");
}
void fun2(int *a){
    printf("用指针倒序\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[n-i-1]);
    }
    printf("\n");
}
int main()
{
    printf("输入n\n");
    scanf("%d",&n);
    int num[100]={0};
    int *p;
    printf("输入n个数\n");
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    p=num;
    fun1(num);
    fun2(p);
    return 0;
}
