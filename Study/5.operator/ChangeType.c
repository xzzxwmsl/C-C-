#include <stdio.h>
void pound(int n);
int main()
{

    /*
    基本转换规则
    1.出现在表达式中时，char和short一般转化为int
    2.涉及两种类型的运算，两个值分别被转化为更高的级别
    3.级别 long double -> double -> float -> unsigned long long -> long long ->
    unsigned long -> long -> unsigned int -> int 
    4.在赋值表达式运算中，最终结果会被转化为赋值对象的类型。 可能导致升级或者降级
    5.作为函数参数传递时，char和short自动转为int，float转为double
    */

    /*
   待赋值的值与目标类型不匹配：
   1.若目标类型为无符号整数，待赋值为整数时，额外的位将被忽略。
   如目标类型为 unsigned char ， 待赋值为原始值%256

   2.目标类型是整数，待赋值为整数，则因实现而异
   3.目标类型是整数，待赋值为浮点数，该行为未定义
   23.12->23, 23.99->23, -25.5->-25
   */
    int x, y, z, w;
    printf("%d\n", (x = -1) ? (y = -1, y += x + 5) : (x = 7, y = 3));

    char ch;
    int i;
    float f1;
    f1 = i = ch = 'C'; // 'C' = 67
    printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);
    ch = ch + 1;
    i = f1 + 2 * ch;
    f1 = 2.0 * ch + i;
    printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);
    ch = 1107;
    printf("Now ch = %c\n", ch); // %c 取 1107 % 256
    ch = 80.89;
    printf("Now ch = %c\n", ch); //ch = 80

    int times = 5;
    char c = '!'; //33
    float f = 6.3f;
    pound(times);
    pound(c);
    pound(f);

    getchar();
    return 0;
}

void pound(int n){
    while (n-->0)
    {
        printf("#");
    }
    printf("\n");
}