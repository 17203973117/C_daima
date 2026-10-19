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
#include <stdio.h>
#include <math.h>
int add(int a,int b)
{
    return a+b;
}
int del(int a,int b)
{
    int c = a>b?a:b;
    int d =a<b?a:b;
    return c-d;
}
int fun1(int a,int b)
{
    return pow(a,b);
}
int fun2(int a,int b)
{
    return sqrt(a*b);
}
int main()
{
    int a = 0;
    int b = 0;
    printf("%s\n","请输入两个整数:");
    scanf("%d %d",&a,&b);
    printf("%d\n",add(a,b));
    printf("%d\n",del(a,b));
    printf("%d\n",fun1(a,b));
    printf("%d\n",fun2(a,b));
    return 0;
}