//1
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int count = 0;
//     for(i=0;i<=100;i++)
//         {
//             if(i%10 == 9)
//                 {
//                     printf("%d\n",i);
//                     count++;
//                 }
//         }
//     printf("共含有:%d个\n",count);    
//     return 0;
// }

//2
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     for(i=1;i<=9;i++)
//         {
//             for(j=1;j<=i;j++)
//                 {
//                     k = i*j;
//                     printf("%d*%d=%-2d ",i,j,k);
//                 }
//             printf("\n");    
//         }    
//     return 0;
// }

//3
#include <stdio.h>
void fun(int arr[],int sz)
{
    int i = 0;
    int j = 0;
    for(i=0;i<sz-1;i++)
        {
            for(j=0;j<sz-1-i;j++)
                {
                    if(arr[j]>arr[j+1])
                        {
                            int num = arr[j];
                            arr[j] = arr[j+1];
                            arr[j+1] = num;
                        }
                }
        }
}
int main()
{
    int arr[] = {7,4,32,3,1,67,978,43,2};
    int sz = sizeof(arr)/sizeof(arr[0]);
    fun(arr,sz);
    int i = 0;
    for(i=0;i<=sz-1;i++)
        {
            printf("%d ",arr[i]);
        }
    return 0;
}