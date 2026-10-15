// 1
// #include <stdio.h>
// int main()
// {
//     printf("hello world\n");
//     return 0;
// }

// 2
// #include <stdio.h>
// int add(int a,int b)
// {
//     return a+b;
// }
// int main()
// {
//     printf("%d\n",1);
//     printf("%c\n",'o');
//     printf("%f\n",1.8);
//     int a;
//     int b;
//     scanf("%d",&a);
//     scanf("%d",&b);
//    int c = add(a,b);
//     printf("%d\n",c);
 //    return 0;
// }

// 3
#include <stdio.h>
#include <string.h>
int count1(char* p)
{
    int i;
    int count = 0;
    for(i=0;i<strlen(p);i++)
    {
        count++;
    }
    return count;
}

int main()
{
   char arr1[] = "gaDdaddwd";
   int i;
   for(i=0;i<strlen(arr1);i++)
   {
    printf("%c\n",arr1[i]);
   }
   int m = count1(arr1);
   printf("%d\n",m);
    return 0;
}

