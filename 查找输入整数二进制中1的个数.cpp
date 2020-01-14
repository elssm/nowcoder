#include<stdio.h>
int main(void){
	int x,sum=0;
	while(scanf("%d",&x)!=EOF){
		while(x){
        if(x%2==1)
            sum++;
        x/=2;
    }
    printf("%d\n",sum);
    sum=0;
	}
} 

