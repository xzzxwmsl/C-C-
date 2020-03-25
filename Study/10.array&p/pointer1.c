#include "../head.h"
int sum1(int *, int);
int sum2(int[], int);//两者等价，但是第二个提醒是个数组
int main()
{
    //C 语言中指针+1是加一个存储单元，而非一个字节
    int bills[3] = {12, 21, 33};
    int dates[3] = {1, 2, 3};
    int *p1 = bills;
    int *p2 = dates;
    printf("%d %d\n", *(p1 + 1), bills[1]);     //equally
    printf("%p %p %p\n", p2, &dates[0], dates); //equally
    printf("%d %d\n", (*p1) + 1, *(p1 + 1));
    CUT_LINE;
    for (int i = 0; i < 3; i++)
    {
        printf("*(p1+%d) = %d, bills[%d] = %d \n", i, *(p1 + i), i, bills[i]);
    }
    CUT_LINE;
    printf("SUM of dates is %d %d", sum1(dates, 3), sum2(dates, 3));
    NEXT_LINE;
    FIN_PROGRAM;
}
int sum1(int *num,int n){
    int sum = 0;
    for (int i = 0; i < n;i++){
        sum += *(num + i);
        //sum += num[i]; //等价
    }
    return sum;
}

int sum2(int num[],int n){
    int sum = 0;
    for (int i = 0; i < n;i++){
        sum += num[i];
    }
    return sum;
}