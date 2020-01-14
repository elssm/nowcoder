#include<stdio.h>
int main(void){
	int x;
	while(scanf("%d",&x)!=EOF){
        if(x<6)
		printf("-1\n");
	else if(x>=6&&x<28)
		printf("1\n");
	else if(x>=28&&x<496)
		printf("2\n");
	else if(x>=496&&x<8128)
		printf("3\n");
		else
		printf("4\n");
    }
} 
