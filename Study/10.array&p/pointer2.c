#include "../head.h"
int sum(const int[], int); //不能改变数组的值
// const int *p;
// int *const p;
// const int *const p;
int main()
{
    // *p++ == *(p++), 因为 8 和 ++的优先级相同，但是结合顺序是从右往左
    int num[] = {1, 2, 3, 4};
    int *ppp = num, *qqq = &num[3];
    printf("qqq-ppp is %d\n", qqq - ppp); //表示相差了3个int, 而非字节

    //严重的ERROR：解引用未初始化的指针
    int *p;
    //  *p = 6; //乍一看正确，但是*p只是申明了，并没有为它分配内存空间
    p = malloc(sizeof(int));
    *p = 6; //true
    printf("%d\n", *p);
    CUT_LINE;
    //const
    printf("sum of num is: %d\n", sum(num, 4));
    const int NUM[] = {11, 22, 33, 44, 55};
    const int *dp = NUM; //指针不能用于改变值
    int* const dq = NUM; //不能改变指针的指向
    printf("*dp is %d,", *dp);
    printf("change dp to num is %d\n", *(dp = num));
    // *dp = 101; //wrong
    printf("*dq is %d", *dq);
    // dq = dp; //wrong
    printf("dq can change the value %d\n", *dq+=1);

    //非const的数据只能传给普通指针
    const int array1[2] = {12, 123};
    const int *pp = array1;
    int *qq;
    qq = array1;
    *qq += 1;
    printf("%d", array1[0]);
    FIN_PROGRAM;
}

int sum(const int num[], int n)
{
    int val = 0;
    for (int i = 0; i < n; i++)
    {
        val += num[i];
    }
    return val;
}