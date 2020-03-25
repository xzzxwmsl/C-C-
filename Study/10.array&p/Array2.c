#include "../head.h"
int main()
{
    int A[3][3] = {{1, 2, 3, 4}, {5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("A[%d][%d] is %d ", i, j, A[i][j]); //注意具体值是多少
        }
        NextLine;
    }
    CUT_LINE;
    int B[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("A[%d][%d] is %d ", i, j, B[i][j]);
        }
        NextLine;
    }
    CUT_LINE;
    int *p = *(B + 1);
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", *(p + i));
    }
    Next_Line;
    FIN_PROGRAM;
}