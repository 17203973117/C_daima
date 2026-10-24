// 1

//void *memset(void *ptr, int value, size_t num);
// 1. `ptr`：要填充的内存起始地址
// 2. `value`：填充的**字节值**（虽然是 int，只会取低 8 位）
// 3. `num`：一共填充多少个**字节**

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char arr[20]={0};
//     char a1[] = "hello python!";
//     strcpy(arr,a1);
//     printf("%s\n",arr);
//     printf("%s\n",a1);
//     memset(arr+6,'m',2);
//     printf("%s\n",arr);
//     return 0;
// }

//2 
//求素数
// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     int j = 0;
//     int count = 0;
//     for(i=100;i<=200;i++)
//     {
//          int isprime = 1;
//         for(j=2;j<=i-1;j++)
//             {
//                 if(i%j==0)
//                     {
//                         isprime = 0;
//                         break;
//                     }
//             }        
//         if(isprime == 1)    
//             {
//                 printf("%d是素数\n",i);
//                 count++;
//             }    
            
//     } 
//     printf("素数的个数为:%d\n",count);
//     return 0;
// }

//3
//通过二分求法，传入数组中一个元素，返回其下标
void fun1(int* p,int len)
    {
        int i = 0;
        int j = 0;
        for(i=0;i<len-1;i++)
            {
                for(j=0;j<len-1-i;j++)
                    {
                        if(*(p+j)>*(p+j+1))
                            {
                                int num = 0;
                                num = *(p+j);
                                *(p+j) = *(p+j+1);
                                *(p+j+1) = num;
                            }
                    }
            }

    }
int fun2(int arr[],int k,int len)
    {
        int left = 0;
        int right = len-1;
     while(left<=right)
        {
           int mid = left+(right-left)/2;
           if(k<arr[mid])
            {
                right = mid-1;
            }
           else if(k>arr[mid])
            {
                left = mid +1;
            }
           else
            {
                return mid;
            }
        }    
        return -1;    
    }
#include <stdio.h>
int main()
{
    int arr[] = {1,43,54,76,5,32,65,34,87};
    int len = sizeof(arr)/sizeof(arr[0]);
    fun1(arr,len);
    int i = 0;
    for(i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    int k = 43;
    int ret = fun2(arr,k,len);
    if(ret == -1)
        {
            printf("不在范围内");
        }
    else
        {
            printf("目标元素的下标为:%d\n",ret);
        }    
    return 0;
}