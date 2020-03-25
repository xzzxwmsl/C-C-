#include "../head.h"
int main()
{
    int A1[4] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
        printf("%d ", A1[i]);
    NextLine;
    const int A2[4] = {1, 2, 3, 4}; //const 的数组只能在初始化时赋值，此后不能再修改
    int A3[3] = {};                 //初始化为0
    int A4[3] = {1};                //剩余项初始化为0
    int A5[3];                      //随机值
    for (int i = 0; i < 3; i++)
    {
        printf("%d times' A3 is %d, A4 is %d, A5 is %d\n", i, A3[i], A4[i], A5[i]);
    }
    const int A6[] = {1, 2, 3, 4, 5};                    //auto choose num of array
    for (int i = 0; i < sizeof(A6) / sizeof(A6[0]); i++) //计算数组长度的一种办法
        printf("%d ", A6[i]);
    NextLine;

    //C99 中的 指定初始化器
    int arr[6] = {[4] = 12}; //将arr[4]（第五个元素）初始化为12，其余默认为0
    for (int i = 0; i < 6; i++)
        printf("arr[%d] = %d, ", i, arr[i]);

    NextLine;
    int month[12] = {31, 28, 31, [4] = 31, 30, 31, [1] = 29}; //month[1]=28 --> month[1]=29
    for (int i = 0; i < 12; i++)
    {
        printf("%d\t%d\n", i + 1, month[i]);
    }
    system("PAUSE");
    return 0;
}