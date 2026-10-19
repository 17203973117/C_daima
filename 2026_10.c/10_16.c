// 1
// #include <stdio.h>
// int main()
// {
//     char arr[]="adakdd";
//     char arr1[]={'a','b','c','\0'};
//     printf("%s\n",arr);
//     printf("%s\n","gyadyhf");
//     printf("%s\n",arr1);
//     return 0;
// }

// 2  转义字符
// #include <stdio.h>
// int main()
// {
//     printf("%s\n","abc\\ncde");
//     printf("%s\n","(abc??)");
//     printf("%s\n","(abc\?\?)");
//     printf("%c\n",'\'');
//     return 0;
// }

// 3
// #include <stdio.h>
// #include <String.h>
// int main()
// {
//     char arr[]="huada";
//     int a = strlen(arr);
//     int b = sizeof(arr)/sizeof(arr[0]);
//     printf("%d\n",a);
//     printf("%d\n",b);
//     printf("%s\n","\"");
//     printf("gdau\bdi\n"); 
//     printf("abcd\r12\n"); 
//     // \b光标往前移动一格，后面的覆盖这个位置的字符,\r光标移动到开头
//     return 0;
// }

// 4
// #include <stdio.h>
// int main()
// {
//     printf("%s\n","\123");
//     printf("%c\n",'\123');

//     printf("%c\n",'0');
//     printf("%c\n",'\x30');

//     printf("%c\n",97);
//     return 0;
// }

//5
#include <stdio.h>
int main()
{
    char s[]="ajd\bhad";
    printf("%s\n",s);
    char s1[]="adjg\rfc";
    printf("%s\n",s1);
    return 0;
}
