#include <stdio.h>
#include <windows.h>
int main()
{
    //对于逻辑求值运算符来说，是从左向右的
    //一般表达式的方向由编译器决定
    int x = 9, y = 9;
    x++ > 9 && ++x > 9; //从左至右，一个为假则停止
    printf("%d", x);
    y++<10 || y++> 10;
    printf("\n%d\n", y);
    char c;
    c=getchar();
    switch (c)
    {
    case 'a':
        printf("A\n");
        break;
    case 'b':
        printf("B\n");
        break;
    default:
        printf("ELSE\n");
        break;
    }

    system("PAUSE");
    return 0;
}