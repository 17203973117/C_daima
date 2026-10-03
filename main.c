#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
    printf("-------------------\n");
    printf("-------------------\n");
    printf("-------游戏开始-----\n");
}
int main()
{
 menu();
srand((unsigned int)time(NULL));
int guess = rand()%100+1;
 while(1)
 { 
    int a;
   printf("请输入要猜的数字:");
   scanf("%d",&a);
   if(a>guess)
   {
    printf("猜大了\n");
   }
   else if(a<guess)
   {
    printf("猜小了\n");
   }
   else{
    printf("猜对了\n");
    break;
   }
 }
 
 return 0;
}