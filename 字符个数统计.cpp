#include<stdio.h>
#include<string.h>
int main(void){
	char s[1000];
	int a[127]={0};
	int i,k,count=0;
	gets(s);
	for(i=0;i<strlen(s);i++){
		k=(int)s[i];
		if(a[k]==0)
			a[k]=1;
	}
	for(i=0;i<127;i++){
		if(a[i]==1)
			count++;
	}
	printf("%d",count);
}
