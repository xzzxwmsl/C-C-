#include <stdio.h>
#include <windows.h>

int main()
{

    int n = 0;
    size_t intsize;

    //sizeof 是运算符，对于具体的数据对象可以直接使用，而运算对象是类型（如float）则需要括起来
    intsize = sizeof(int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof n, intsize);
    printf("size_t types is %zd\n", sizeof(size_t));

    int a = 1, b = 1;
    int a_post, b_post;

    a_post = a++;
    b_post = ++b;
    printf("a\ta_post\tb\tb_post\n");
    printf("%1d\t%d\t%d\t%d\n", a, a_post, b, b_post);

    /*
    ++ and -- 有很高的优先级，只有（）的优先级比他们高
    x*y++  -->  (x)*(y++)
    递增（减）符只对一个可修改左值起效果，so (a+b)++ is wrong
    */

    /*
   规范：
   如果一个变量出现在一个函数的多个参数中，不要使用++
   一个变量出现在同一个表达式中，不要使用++
   */
    int i = 5, j = 5;

    printf("%d  %d\n", (i++) + (++i), (j++) + (j++)); //GCC 中表达式从右往左求
    //因此为 (++i) -> (i++)+6 -> 6+6 -> 12
    //(j++)+5 -> (6)+5 ->11

    int k = 1;
    printf("%d\n", 6 + (k = 3)); //k=3 是完整的表达式，但它不是一个语句
    getchar();
    return 0;
}