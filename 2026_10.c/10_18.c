//1
// #include <stdio.h>
// int a = 10;
// void fun()
// {
//     printf("全局变量:%d\n",a);
// }
// int main()
// {
//     int a = 5;
//     printf("局部变量: %d\n",a);
//     fun();
//     int b = 8;
//     int c = 4;
//     printf("%d\n",b%c);
//     printf("%d\n",b/c);
//     printf("%d\n",b%3);
//     printf("%d\n",b/3);
//     printf("%f\n",b/4.0);

//     return 0;
// }

//2
// #include <stdio.h>
// int main()
// {
//     int a = 5;
//     int b = 10;
//     int c = 4;
//     printf("%d %d %d\n",a,b,c);
//     a = b = c - 1;
//     printf("%d %d %d\n",a,b,c);
//     return 0;
// }

//3
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int a = 9;
//     int b = sqrt(9);
//     printf("%d\n",b);
//     int c = pow(9,2);
//     printf("%d\n",c);

//     return 0;
// }

//4
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand((unsigned int)time(NULL));
    int num = rand()%100+1;
    int a = 0;
    while(1)
    {
        printf("请输入要猜的数字:");
        scanf("%d",&a);
        if(a>num)
        {
            printf("输大了\n");
        }
        else if(a<num)
        {
            printf("输小了\n");
        }
        else
        {
            printf("恭喜你,猜对了\n");
            break;
        }
        
    }

    return 0;
}