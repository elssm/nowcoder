#include<stdio.h>
int change(float i){
	int m,n;
	m=(int)i;
	n=(int)(i+0.5);
	if(m==n){
		printf("%d",m);
	}
	else{
		printf("%d",m+1);
	}
} 
int main(void){
    float i;
    scanf("%f",&i);
    change(i);
} 
