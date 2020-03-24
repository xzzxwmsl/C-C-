#include <stdio.h>
#include <windows.h>
#include<ctype.h>
int main()
{
    // int temp;
    // while( scanf("%d",&temp)==1 ){
    //     printf("%d ", temp);
    // }

    char ch;
    ch = getchar();
    while (ch != '\n')
    {
        if (ch == ' ')
        {
            putchar(ch);
        }
        else
        {
            putchar(ch + 1);
        }
        ch = getchar();
    }

    printf("\n");
    char c;
    while ((c=getchar())!='\n') //zip 此处的括号不可以省略，因为!=优先级高于=
    {
        if (c == ' ')
        {
            putchar(c);
        }
        else
        {
            putchar(c + 1);
        }
    }

    printf("\n");
    while ((ch=getchar())!='\n')
    {
        if(isalpha(ch)){
            putchar(ch + 1);
        }else{
            putchar(ch);
        }
    }
    /*
    ctype.h
    isalpha();
    isalnum(); 字母，数字
    isblank(); ' ', '\n', '\t'
    iscntrl();
    isdigit();
    isgraph();  除空格外的可打印字符
    islower();
    isupper();
    ispunct();  标点符号
    isxdigit(); 十六进制
    */

    system("pause");
    return 0;
}