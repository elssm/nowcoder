#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    gets(str);
    int i;
    int len=strlen(str);
    for (i=0;i<len;i++)
    {
        if('a'<=str[i]&&str[i]<='c')
        str[i]='2';
        else if('d'<=str[i]&&str[i]<='f')
        str[i]='3';
        else if('g'<=str[i]&&str[i]<='i')
        str[i]='4';
        else if('j'<=str[i]&&str[i]<='l')
        str[i]='5';
        else if('m'<=str[i]&&str[i]<='o')
        str[i]='6';
        else if('p'<=str[i]&&str[i]<='s')
        str[i]='7';
        else if('t'<=str[i]&&str[i]<='v')
        str[i]='8';
        else if('w'<=str[i]&&str[i]<='z')
        str[i]='9';
        else if('A'<=str[i]&&str[i]<'Z')
        str[i]=str[i]+32+1;
        else if(str[i]=='Z')
        str[i]='a';
        else
        str[i]=str[i];
    }
    printf("%s\n",str);
    return 0; 
    }
