#include<stdio.h>
int main(void){
	int x,i,q,m=0,n,p,count=0,sum=0;
	scanf("%d",&x);
	q=x*x;
	n=x; 
	while(x){
		count++;
		x/=10;
	}
	while(n){
		if(n%10==q%10){
			m++; 
		}
		n/=10;
		q/=10;
		
	}
	if(m==count)
		printf("yes");
	else
		printf("no");
}
