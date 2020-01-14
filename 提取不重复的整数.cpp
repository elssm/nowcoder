#include<stdio.h>
int main(void){
	int x,i,sum=0;
	int a[10]={0};
	scanf("%d",&x);
	while(x){
		i=x%10;
		if(a[i]==0){
			a[i]=1;
			sum=sum*10+i;
		}
		x/=10;
	}
	printf("%d",sum);
} 
