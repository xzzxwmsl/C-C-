#include<stdio.h>
#include<windows.h>
void display(char ch, int rows, int cols){
    for (int i = 0; i < rows;i++){
        for (int j = 0; j < cols;j++){
            printf("%c", ch);
        }
        printf("\n");
    }
}
void cls(){ //用来清除scanf留在缓冲区的'\n'
    while(getchar()!='\n')
        ;
}
int main(){
    //混用scanf和getchar时需注意，getchar读取所有字符，而scnaf跳过空白字符
    char ch;
    int rows, cols;
    printf("Enter \n");
    while ((ch=getchar())!='\n')
    {
        if(scanf("%d,%d", &rows, &cols)!=2){ // 退出循环条件
            break;
        }
        display(ch, rows, cols);
        cls();
    }

    system("PAUSE");
    return 0;
}