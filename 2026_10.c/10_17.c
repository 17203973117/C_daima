// 1
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     printf("%d\n",071);
//     printf("%c\n",'\071');

//     int len = strlen("abcde");
//     int s = sizeof("abcde");
//     printf("%d\n",len);
//     printf("%d\n",s);
//     ;//空语句，一个;就是一个空语句
//     return 0;
// }

//2
// '/**/'不支持嵌套

/*
#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int c = add(3,4);
    printf("%d\n",c);
    return 0;
}
*/

//3
#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool a = true;
    if(a)
    {
        printf("I like c");
    } 
    return 0;
}
