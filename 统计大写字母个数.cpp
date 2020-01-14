#include<stdio.h>
#include<string.h>
int main(void){
	char s[1000];
	int i,count=0;
	while(gets(s)){
		count=0;
		for(i=0;i<strlen(s);i++){
		if(s[i]>=65&&s[i]<=90)
			count++;
	}
	printf("%d\n",count);
	}
} 
