#include <stdio.h>
#include <string.h>
int main()
{
    char arr[10]="hello,";
    char str[10]="world";
    strcat(arr,str);
    printf("%s\n",arr);
    return 0;
}