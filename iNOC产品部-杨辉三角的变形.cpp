#include<stdio.h>
int main(){
	int n;
	while (scanf("%d",&n)!=EOF){	//—≠ª∑ ‰»Î 
        if (n==1||n==2){
            printf("%d\n",0);
        }
        else if (n%2==1){
            printf("%d\n",2);
        }
        else if (n%4==0){
            printf("%d\n",3);
        }
        else
            printf("%d\n",4);
    }
}
