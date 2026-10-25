//1
//无符号整数返回除数和余数
// #include <stdio.h>
// void print(unsigned int num)
//     {
//         if(num>9)
//             {
//                 printf("%u\n",num/10);
//             }
//         printf("%u\n",num%10);    
//     }
// int main()
// {
//     unsigned int num = 0;
//     printf("请输入一个无符号整数:");
//     scanf("%u",&num);
//     print(num);
//     return 0;
// }

//2
//求字符串的长度,实现函数
// #include <stdio.h>
// int fun(char* p)
//     {
//         int count = 0;
//         while(*p != '\0')
//             {
//                 count++;
//                 p++;
//             }
//         return count;    
//     }
// int main()
// {
//     char arr[] = "ahdad";
//     int ret = fun(arr);
//     printf("%d\n",ret);
//     return 0;
// }

//3
//求字符串长度的库函数 #include <string.h>
#include <stdio.h>
#include <string.h>
int main()
{
    printf("%d\n",strlen("jash"));
    return 0;
}