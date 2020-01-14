#include<stdio.h>
#include<string.h>
int main(void){
	char s[1000];
	int i;
	gets(s);
	for(i=strlen(s)-1;i>=0;i--){
		printf("%c",s[i]);
	}
} 
