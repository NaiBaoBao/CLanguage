//
//  main.c
//  ex
//
//  Created by lin geng on 12/19/18.
//  Copyright © 2018 lin geng. All rights reserved.
//T3
#include<stdio.h>
int main()
{
    int a[100];
    int i,n,p=0,q;
    printf("input number:");
    scanf("%d",&n);
    q=n;
    for(i=0;i<n;i++) a[i]=i+1;
    for(i=0;;i++)
    {
        if(i==n) i=0; //当i++一直到n时，肯定有一些没有被选到，比如我们输入8,第一轮是3,6被赋值0，当i=8时，继续下一轮//
        if(a[i]!=0) p++;//我们下面定义的是当循环到三时，就赋值0，所以这边等0的不考虑在内//
        else continue;
        if(p%3==0)//这个就是从0一直加，到三的倍数就赋值为0，从而就达到我们的目的//
        {a[i]=0;q--;} //上面q=n;表明q==n,只有一个为0就减一，为下面做铺垫//
        if(q==1) break; //当剩下最后一个就输出//
    }
    for(i=0;i<n;i++)
        if(a[i]!=0)
            printf("spare: %d\n\n",a[i]);
}
