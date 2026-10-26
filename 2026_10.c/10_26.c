//1
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    int num1 = a;
    int num2 = b;
    if(a<b) 
        {
            int temp = a;
            a = b;
            b = temp;
        }
    while(a%b)
        {
            int m = a%b;
            a = b;
            b = m;
        }    
    printf("最大公约数为:%d\n",b);
    int n = num1*num2/b;
    printf("最小公倍数为:%d\n",n);    
    return 0;
}