//
//  main.c
//  ex
//
//  Created by lin geng on 12/19/18.
//  Copyright © 2018 lin geng. All rights reserved.
//T6
#include <stdio.h>
int n;
void sort(int **p){
    for(int i=0;i<n-1;i++){
        for (int j=i+1; j<n; j++) {
            if((*p)[i]>(*p)[j]){
                int tmp=(*p)[i];
                (*p)[i]=(*p)[j];
                (*p)[j]=tmp;
            }
        }
    }
}
int main()
{
    int *a;
    int **b;
    int num[100];
    a=num;
    b=&a;
    printf("输入n\n");
    scanf("%d",&n);
    printf("输入n个数\n");
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    sort(b);
    printf("排序后的数组\n");
    for(int i=0;i<n;i++){
        printf("%d  ",num[i]);
    }
    printf("\n");
    return 0;
}
