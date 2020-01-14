#include<stdio.h>
int main(void){
	int x,i;
	int a=1,b=1,c;
	while(scanf("%d",&x)!=EOF){
		if(x<=2)
			printf("1\n");
		else{
			for(i=0;i<x-2;i++){
			c=a+b;
			a=b;
			b=c;
		}
		printf("%d\n",c);
		a=1;
		b=1;
	}
	}
} 
