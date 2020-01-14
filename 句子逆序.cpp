#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[10000];
    int a,len,i;
    gets(str);
    len = strlen(str);
    for(i=len-1;i>=0;i--)
    {
        if(str[i]==' ')
        {
            a = i+1;
            while(str[a]!=' ')
            {
                if(a==len)
                    break;
                printf("%c", str[a]);
                a++;
            }
            printf(" ");
        }
 
    }
    i=0;			//处理第一个字符串 
    while(str[i]!=' ')
    {
        printf("%c",str[i]);
        i++;
    }
    return 0;
}
