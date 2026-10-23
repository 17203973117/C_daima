// 1
// #include <stdio.h>
// int main()
// {
//     int year = 0;
//     int month = 0;
//     int day = 0;
//     scanf("%4d%2d%2d",&year,&month,&day);
//     printf("年:%d\n",year);
//     printf("月:%d\n",month);
//     printf("天:%d\n",day);
//     return 0;
// }

//2
// #include <stdio.h>
// int main()
// {
//     int a = printf("%s","hello python!");
//     printf("\n%d\n",a);
//     return 0;
// }

//3 求阶乘
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int num = 0;
//     int m = 1;
//     printf("请输入要求数字的阶乘:");
//     scanf("%d",&num);
//     for(i=1;i<=num;i++)
//         {
//             m*=i;
//         }
//     printf("%d\n",m);    
//     return 0;
// }

//4 猜数游戏
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
    {
        printf("******************\n");
        printf("*****游戏开始******\n");
        printf("*******************\n");
    }
void game()
    {
        int ret = rand()%100+1;
        int guess = 0;
        while(1)
            {
                printf("请输入要猜的数字:");
                scanf("%d",&guess);
                if(guess<ret)
                    {
                        printf("猜小了\n");
                    }
                else if(guess>ret)
                    {
                        printf("猜大了\n");
                    }  
                else
                    {
                        printf("猜对了\n");
                        break;
                    }      
            }
    }    
int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请输入数字:");
        scanf("%d",&input);
        switch(input)
            {
                case 1:
                    game();
                    break;
                case 2:
                    printf("游戏结束\n");
                    break;
                default:
                    printf("输入错误,请重新输入\n");
                    break;      
            }
    } while (input!=2);
    
    return 0;
}
