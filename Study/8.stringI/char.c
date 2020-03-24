#include <stdio.h>
#include <windows.h>
int main(int argc, char *argv[])
{
    //input 分为缓冲输入和无缓冲输入
    //缓冲分为完全缓冲————缓冲区填满时才刷新缓冲区和行缓冲————出现换行符时才刷新缓冲区
    char ch;
    while ((ch = getchar()) != 'q') //EOF是一个值，在stdio.h 中已经被定义了  getchar返回值类型是int
    {
        putchar(ch); /* code */
    }

    system("PAUSE");
    return 0;
}