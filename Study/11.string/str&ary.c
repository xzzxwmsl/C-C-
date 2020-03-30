#include "../head.h"
#define MSG "It'a a program to talk about pointer and array"
int main()
{
    puts("Hello World!"); // would add '\n' to the string auto
    //string end by '\0'
    char greeting[] = "hello"
                      " everyone"
                      ", my name is xzz";
    puts(greeting);

    char msg[] = MSG;
    char *p = MSG;
    printf("\t address of MSG is %p\n", MSG);
    printf("\t address of msg is %p\n", msg);
    printf("\t address of p is %p\n", p);
    printf("\t str's add is %p\n", "It'a a program to talk about pointer and array");
    CUT_LINE;
    const char *copy;
    copy = p;
    printf("msg = %s || &msg= %p || value = %p\n", msg, &msg, msg);//
    printf("p = %s || &p= %p || value = %p\n", p, &p, p);//%p代表指针指向的地址
    printf("copy = %s || &copy= %p || value = %p\n", copy, &copy, copy);//
    //字符串数组是从静态储存区拷贝到动态内存的副本，而指针直接指向那里
    //数组元素是变量而数组名不是变量
    //所以p=msg合法而msg=p不合法
    //即：字符串常量保存在静态存储区，数组中是他的副本，指针直接指向它。所以如果不是为了修改该字符串，不要使用非const指针指向它
    //p[0] = 'P'; //一般编译器不会运行此行为
    msg[0] = 'A';
    puts(msg); //数组副本中的字符串常量改变了
    puts(p);   //静态存储区未改变
    printf("size of p is %zd, size of msg is %zd\n", sizeof p, sizeof msg);
    //字符串数组是从静态储存区拷贝到动态内存的副本，而指针直接指向那里
    const char *str_1[3] = {"XZZ", "XW", "MSL"}; //  == * (str[3])
    char str_2[3][100] = {"XZZ", "XW", "MSL"};

    printf("%-10s %-10s\n", "pointer", "array");
    for (int i = 0; i < 3; i++)
    {
        printf("%-10s %-10s\n", str_1[i], str_2[i]);
    }
    printf("size of str_1 is %zd, size of str_2 is %zd\n", sizeof(str_1), sizeof(str_2));

    
    FIN_PROGRAM;
}