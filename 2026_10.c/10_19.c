// 1
// #include <stdio.h>
// int main()
// {
//     printf("%s\n","请输入数字(0/1):");
//     int input=0;
//     scanf("%d",&input);
//     if(input==0)
//     {
//         printf("输入错误");
//     }
//     else if(input==1)
//     {
//         printf("输入正确");
//     }
//     else
//     {
//         printf("格式错误");
//     }
//     return 0;
// }

//2
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int num = 0;
//     while(i<100)
//         {
//             if(i%2==0)
//             {
//                 printf("%d\n",i);
//                 num+=i;
//             }
//             i++;
//         }
//     printf("%d\n",num);
//     return 0;
// }

//3
// #include <stdio.h>
// #include <math.h>
// int add(int a,int b)
// {
//     return a+b;
// }
// int del(int a,int b)
// {
//     int c = a>b?a:b;
//     int d =a<b?a:b;
//     return c-d;
// }
// int fun1(int a,int b)
// {
//     return pow(a,b);
// }
// int fun2(int a,int b)
// {
//     return sqrt(a*b);
// }
// int main()
// {
//     int a = 0;
//     int b = 0;
//     printf("%s\n","请输入两个整数:");
//     scanf("%d %d",&a,&b);
//     printf("%d\n",add(a,b));
//     printf("%d\n",del(a,b));
//     printf("%d\n",fun1(a,b));
//     printf("%d\n",fun2(a,b));
//     return 0;
// }

//4
// #include <stdio.h>
// enum color  //枚举,打印的话以索引来进行
// {
//     red,
//     yellow,
//     green,
//     blue
// };
// int main()
// {
//     enum color ret = green;
//     printf("%d\n",ret);
//     return 0;
// }
    
//5
// #include <stdio.h>
// extern int a;
// int main()
// {
//     printf("%d\n",a);
//     return 0;
// }

//6 外部调用extern
// #include <stdio.h>
// #include <string.h>
// extern void fun(char* p,int len);
// int main()
// {
//     char arr[]="awdukaf";
//     int len = strlen(arr);
//     fun(arr,len);
//     return 0;
// }

//7
// #include <stdio.h>
// #define a 10
// #define Add(x,y) x+y
// #define Del(x,y) x-y
// int main()
// {
//     int m = 6;
//     int n = 2;
//     printf("%d\n",a);
//     int c = Add(m,n);
//     int d = Del(m,n);
//     printf("m+n=%d\n",c);
//     printf("m-n=%d\n",d);
//     return 0;
// }

//8
#include <stdio.h>
int main()
{
    int a = 10;
    printf("%p\n",&a);
    float b = 8.9;
    int c = (int)b;
    printf("%d\n",c);
    return 0;
}