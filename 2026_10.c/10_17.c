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
// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
//     bool a = true;
//     if(a)
//     {
//         printf("I like c");
//     } 
//     return 0;
// }

//4
// #include <stdio.h>
// int main()
// {
//     char arr[]="daygdjh";
//     printf("%zu\n",sizeof(arr));
//     size_t a = sizeof(arr);
//     int b = sizeof(arr)/sizeof(arr[0]);
//     printf("%d %d\n",a,b);

//     int b1 = 12;
//     printf("%zu\n",sizeof(b1+1));

//     short c = 0;
//     int s = 8;
//     printf("%zu\n",sizeof(c = s+1));
//     printf("%d\n",c);
//     return 0;
// }

//5
// #include <stdio.h>
// int main()
// {
//     bool a = true;
//     if(a)
//     {
//         printf("欢迎回来,主人");
//     }
//     return 0;
// }

//6
#include <stdio.h>
#include <math.h>
int main()
{
    int a = 4;
    int b = 9;
    int c = pow(a,2);
    int d = sqrt(b);
    int e = sqrt(a);
    printf("%d\n",c);
    printf("%d %d\n",d,e);

    return 0;
}
