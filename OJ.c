#include<stdio.h>
int main()
{
    int n;
    int a[200]={0};
    int b[100]={0};
    int c[100]={0};
    for(int i=0;i<2;i++){
        int k,p;
        k=0;p=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        for(int j=0;j<n;j++){
            if(a[j]%2==1){
                b[k]=a[j]; 
                k+=1;
            }
            else{
                c[p]=a[j];
                p+=1;
            }
        }
        for(int i=0;i<k-1;i++)
        {
            for(int j=i+1;j<k;j++)
              if(b[i]>b[j])
              {
                  int t=b[i];
                  b[i]=b[j];
                  b[j]=t;
              }
        }
        for(int i=0;i<p-1;i++)
        {
            for(int j=i;j<p;j++)
              if(c[i]>c[j])
              {
                  int t=c[i];
              c[i]=c[j];
              c[j]=t;}
        }
        printf("%d",b[0]);
        for(int i=1;i<k;i++)
        printf(" %d",b[i]);
        for(int i=0;i<p;i++)
        printf(" %d",c[i]);
        printf("\n");
    }
    return 0;
}

