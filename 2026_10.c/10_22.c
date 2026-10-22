// 1
// #include <stdio.h>
// enum color
// {
//     red,
//     green,
//     blue,
//     yellow
// };
// int main()
// {
//     enum color c = yellow;
//     printf("%d\n",c);  
//     return 0;
// }

// 2
// #include <stdio.h>
// struct stu
// {
//     char name[20];
//     int age;
//     char telphone[20];
//     char sex[5];
// };
// void fun(struct stu *p)
// {
//     printf("%s %d %s %s\n",(*p).name,(*p).age,(*p).telphone,(*p).sex);
//     printf("%s %d %s %s\n",p->name,p->age,p->telphone,p->sex);
// }
// int main()
// {
//     struct stu s = {"李华",18,"13023439876","男"};
//     printf("%s %d %s %s\n",s.name,s.age,s.telphone,s.sex);
//     fun(&s);
//     return 0;
// }

//3
// #include <stdio.h>
// int main()
// {
//     int i =0;
//     for(i=0;i<=100;i++)
//         {
//             if(i%2==1)
//                 {
//                     printf("%d\n",i);
//                 }
//         }
//     return 0;
// }

//4
// #include <stdio.h>
// int main()
// {
//     // char a = getchar();
//     // printf("%c\n",a);
//     // putchar(a);
//     int b = 0;
//     if((b = getchar())!=EOF)//getchar的返回值类型为int,EOF -1
//         {
//             putchar(b);
//         }
//     return 0;
// }

//5
#include <stdio.h>
int main()
{
    char arr[20]={};
    // int a[10]={1,2,3,4,5,6};
    // printf("%d\n",a[1]);
    // printf("%s","请输入字符串:");
    // scanf("%s",&arr);
    // printf("%s\n",arr);
    printf("%s","请输入数字(1/0):");
    int ch = 0;
    if((ch = getchar())=='1')
        {
            printf("%s\n","你好,世界");
        }
    else
        {
            printf("%s\n","你好,AI");
        }    
    return 0;
}
    
