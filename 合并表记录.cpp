#include<stdio.h>
int main()
{
    int n;
    int a[100000];
    int index,value;
    int i,j;
    while(scanf("%d",&n)!=EOF) //��ð�while���ϣ��Է���0
    {
        for (i=0;i<n;i++)
        {
            scanf("%d",&index);
            scanf("%d",&value);
            a[index]+=value;
    
        }
    
        for (i=0;i<n;i++)
        {
            if(a[i]!= '\0') //��ʾ�ǿյ�
                printf("%d %d\n",i,a[i]);
        }
        
    }
       
    return 0;
              
}
