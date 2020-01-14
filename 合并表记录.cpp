#include<stdio.h>
int main()
{
    int n;
    int a[100000];
    int index,value;
    int i,j;
    while(scanf("%d",&n)!=EOF) //最好把while加上，以防是0
    {
        for (i=0;i<n;i++)
        {
            scanf("%d",&index);
            scanf("%d",&value);
            a[index]+=value;
    
        }
    
        for (i=0;i<n;i++)
        {
            if(a[i]!= '\0') //表示是空的
                printf("%d %d\n",i,a[i]);
        }
        
    }
       
    return 0;
              
}
