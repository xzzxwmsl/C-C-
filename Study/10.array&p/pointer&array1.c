#include "../head.h"
#define ROWS 3
#define COLS 4
void sum_rows(int ar[][COLS], int rows);
void sum_cols(int arr[][COLS], int);
int sum2d(int (*ar)[COLS], int rows);
//char **p和char p[2][3]之间不能相互传递参数，因为它们具体的内存分布不一样，这样在运行时就会出现段错误。
int sum2D(int (*ar)[COLS]);
int sum(int *p);
int main()
{
    int junk[ROWS][COLS] = {{2, 4, 6, 8}, {3, 5, 7, 9}, {12, 10, 8, 6}};
    sum_rows(junk, ROWS);
    CUT_LINE;
    sum_cols(junk, ROWS);
    printf("Sum of all elements is %d\n", sum2d(junk, ROWS));
    printf("Sum of all elements is %d\n", sum2D(junk));
    printf("Sum of all elements is %d\n", sum(junk[0]));
    FIN_PROGRAM;
}
void sum_rows(int ar[][COLS], int rows)
{
    int tot;
    for (int i = 0; i < rows; i++)
    {
        tot = 0;
        for (int j = 0; j < COLS; j++)
        {
            tot += ar[i][j];
        }
        printf("row %d sum is %d\n", i, tot);
    }
}
void sum_cols(int arr[][COLS], int rows)
{
    int tot;
    for (int i = 0; i < COLS; i++)
    {
        tot = 0;
        for (int j = 0; j < rows; j++)
        {
            tot += arr[j][i];
        }
        printf("col %d sum is %d\n", i, tot);
    }
}
int sum2d(int (*ar)[COLS], int rows)
{
    int tot = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            tot += ar[i][j];
        }
    }
    return tot;
}
int sum2D(int (*ar)[COLS])
{
    int tot = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            tot += *(*(ar + i) + j);
            // tot += ar[i][j];
        }
    }
    return tot;
}
int sum(int *p)
{
    int tot = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            tot += *(p + COLS * i + j); //cols 
        }
    }
    return tot;
}