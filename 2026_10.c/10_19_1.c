#include <stdio.h>
int a=10;

void fun(char* p,int len)
{
    int i = 0;
    for(i=0;i<len;i++)
        {
            printf("%c\n",p[i]);
        }
}