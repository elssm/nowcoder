#include<stdio.h>
int main(void){
	int x,i,q,m=0,n,p,count=0,sum=0;
	while(scanf("%d",&x)!=EOF){
		sum=0;
		for(i=0;i<x;i++){
		count=0,m=0;
		n=p=i;
		q=i*i;
		while(p){
		count++;
		p/=10;
	}
	while(n){
		if(n%10==q%10){
			m++; 
		}
		n/=10;
		q/=10;
		
	}
	if(m==count)
		sum++;
	}
	printf("%d\n",sum);
	} 
}
