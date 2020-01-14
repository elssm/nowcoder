#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int len,count =0;
    int flag=0;
    gets(str);
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '"')
            flag++;
        if ((flag % 2 == 0) && str[i] == ' ')
            count++;
    }
    printf("%d\n", count + 1);
    flag = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '"')
            flag++;
        if (str[i] != '"')
        {
            if ((flag % 2 == 0)&& (str[i] == ' '))
            {
                printf("\n");
            }
            else
                printf("%c", str[i]);
        }
             
    }
    printf("\n");
 
}
