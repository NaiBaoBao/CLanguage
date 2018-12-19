//
//  main.c
//  ex
//
//  Created by lin geng on 12/19/18.
//  Copyright © 2018 lin geng. All rights reserved.
//T1

#include<stdio.h>
#include <string.h>
//数字
void fun1(){
    int a,b,c,*p1,*p2,*p3,*p;
    printf("请输入3个数字：\n");
    scanf("%d %d %d",&a,&b,&c);
    p1=&a;p2=&b;p3=&c;
    printf("这3个数字是\n");
    printf("%d %d %d\n",*p1, *p2, *p3);
    if(*p1 > *p2){p=p1;p1=p2;p2=p;}
    if(*p2 > *p3){p=p2;p2=p3;p3=p;}
    if(*p1 > *p2){p=p1;p1=p2;p2=p;}
    printf("由小到大排列是:\n");
    printf("%d %d %d\n", *p1, *p2, *p3);
}
//字符串
void fun2(){
    char buf[3][100];
    char *p[3]={buf[0],buf[1],buf[2]};
    printf("输入三个字符串\n");
    for(int i=0;i<3;i++){
        scanf("%s",p[i]);
    }
    for(int i=0;i<2;i++){
        for(int j=i+1;j<3;j++){
            if(strcmp(p[i], p[j])>0){
                char *t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
        }
    }
    printf("从小到大排序是\n");
    for (int i=0; i<3; i++) {
        printf("%s\n",p[i]);
    }
}
int main()
{
    int action=-1;
    while(action!=0){
        printf("整数排序输入1，字符串排序输入2，退出0\n");
        scanf("%d",&action);
        if(action==1)
            fun1();
        else if(action==2)
            fun2();
    }
    return 0;
}
