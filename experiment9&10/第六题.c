//
//  main.c
//  ex
//
//  Created by lin geng on 12/19/18.
//  Copyright © 2018 lin geng. All rights reserved.
//T6
#include <stdio.h>
#include <math.h>
int main()
{
    float integral(float(*)(float),float,float,int); //声明一个float的指针函数返回值是float，2个float参数，1个int参数的函数。
    float fsin(float);
    float fcos(float);
    float fexp(float);
    float a1,b1,a2,b2,a3,b3,c,(*p)(float);  //定义一个float类型的指针。
    int n=20;
    printf("enter a1,b1: ");                 //输入积分上下限。
    scanf("%f %f",&a1,&b1);
    printf("enter a2,b2: ");
    scanf("%f %f",&a2,&b2);
    printf("enter a3,b3: ");
    scanf("%f %f",&a3,&b3);
    
    p=fsin;  //是float型指针变量指向fsin函数。
    c=integral(p,a1,b1,n);
    printf("sin(x)=%f\n",c);
    
    p=fcos;
    c=integral(p,a2,b2,n);
    printf("cos(x)=%f\n",c);
    
    p=fexp;
    c=integral(p,a3,b3,n);
    printf("exp(x)=%f\n",c);
    
    return 0;
}
float integral(float(*p)(float),float a,float b,int n)
{
    int i;
    float x,h,s;
    h=(b-a)/n;                    //把积分区间分成n段，每段等长。
    x=a;
    s=0;
    for(i=0;i<n;i++)
    {
        x=x+h;
        s=s+(*p)(x)*h;                  //积分值等于20个矩形区间面积的和
    }
    return (s);
}

float fsin(float x)
{
    return sin(x);
}
float fcos(float x)
{
    return cos(x);
}
float fexp(float x)
{
    return exp(x);
}

