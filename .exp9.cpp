#include <stdio.h>

void fun1(int *a,int *b,int *c){
	int min,sec,max;
	if(*a<=*b&&*a<=*c){
		min=*a;
		if(*b<=*c){
			sec=*b;
			max=*c;
		}
		else{
			sec=*c;
			max=*b;
		}
	}
	else if(*b<=*a&&*b<=*c){
		min=*b;
		if(*a<=*c){
			sec=*a;
			max=*c;
		}
		else{
			sec=*c;
			max=*a;
		}
	}
	else{
		min=*c;
		if(*a<=*b){
			sec=*a;
			max=*b;
		}
		else{
			sec=*b;
			max=*a;
		}
	}
	printf("%d %d %d\n",min,sec,max);
}
int main(){
	int *a,*b,*c;
	scanf("%d %d %d\n",a,b,c);
	printf("%d %d %d\n",*a,*b,*c);
	return 0;
}