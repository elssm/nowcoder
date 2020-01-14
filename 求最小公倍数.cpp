#include<stdio.h>
int main(void){
	int i,x,y,max,sum;
	scanf("%d",&x);
	scanf("%d",&y);
	sum=x*y;
	if(y>x)
		max=y;
	else
		max=x;
	for(i=max;i<=sum;i++){
		if(i%x==0 && i%y==0)
			break;
	}
	printf("%d",i);
} 
