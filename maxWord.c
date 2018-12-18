#include <stdio.h>
#include <string.h>
#include <ctype.h>
char* findMax(char* a){
    int num;
    char *max;
    for(int i=0,j=0;i<strlen(a);i++){
        if(isalpha(a[i])){
            j++;
        }
        else{
            if(j>num){
                for(int k=0;k<j;k++){
                    max[k]=a[i-j+k];
                }
                num=j;
            }
            j=0;
        }
    }
    return max;
}
