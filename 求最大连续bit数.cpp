#include<stdio.h>
int main(void){
	int x,i=0,j=0,a,count=0,max=0;
	int m[100];
	while(scanf("%d",&x)!=EOF){
		for(i=0;i<100;i++)	//下次循环之前初始化数组 
			m[i]=0;
		count=0,max=0,i=0,j=0;
		while(x){
		a=x%2;
		m[i++]=a;
		x/=2;
	}
	while(j<i){
		count=0;
		while(m[j++]==1)
			count++;
		if(count>max)
			max=count;
	}	
	printf("%d\n",max); 
	}
}


