#include<stdio.h>
int fun(int n)
{
			int i,j;
			for(i=2;n%i;i++);
			if(i==n)
			return 1;
			else  return 0;
}
int main(void){
	int x,m,i,j,a,b;
	while(scanf("%d",&x)!=EOF){
		a=x/2;
		b=x/2;
	for(i=a;i>0;i--){
		for(j=b;j<x;j++){
			if(fun(i)&&fun(j)&&i+j==x)
				break;
		}
		if(fun(i)&&fun(j)&&i+j==x)
				break;
	}
	printf("%d\n",i);
	printf("%d\n",j);
	}
}
