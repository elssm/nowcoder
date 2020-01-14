#include<stdio.h>
int main(void){
	int x,a,b,sum;
	while(scanf("%d",&x)!=EOF){
		a=2;
		b=2+(x-1)*3;
		sum=0.5*(x*(a+b));
		printf("%d\n",sum);
		}
} 
