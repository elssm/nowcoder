#include<stdio.h> 
int number(int x){
    int sum=0;
    while(x){
        if(x%2==1)
            sum++;
        x/=2;
    }
    printf("%d",sum);
}
int main(void){
    int x;
    scanf("%d",&x);
    number(x);
}
