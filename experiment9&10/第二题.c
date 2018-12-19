//
//  main.c
//  ex
//
//  Created by lin geng on 12/19/18.
//  Copyright © 2018 lin geng. All rights reserved.
//T2
#include<stdio.h>
void func(int *a[3]){
    int tmp=a[0][1];
    a[0][1]=a[1][0];
    a[1][0]=tmp;
    tmp=a[0][2];
    a[0][2]=a[2][0];
    a[2][0]=tmp;
    tmp=a[1][2];
    a[1][2]=a[2][1];
    a[2][1]=tmp;
}
int main()
{
    int arr[3][3]={0};
    int *p[3]={arr[0],arr[1],arr[2]};
    printf("输入矩阵\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("矩阵转置前：\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    
    func(p);
    printf("矩阵转置后\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d  ",p[i][j]);
        }
        printf("\n");
    }
    return 0;
}
