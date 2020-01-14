#include<stdio.h> 
#include<string.h>
int number(int x){
	int i,j=0;
	char s;
    while(x>0){
        i=x%10;
     //   printf("%3d",i);
       s=i+'0';
       putchar(s);
        x/=10;
    }
  //  for (i = 0; i < strlen(s)-2; i++)
  //  printf("%c", s[i]);
    //puts(s);
}
int main(void){
    int x;
    scanf("%d",&x);
    number(x);
}
