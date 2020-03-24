#include<stdio.h>
#include<windows.h>
int main(int argc, char *argv[]){
    for (int i = 0; i < argc;i++){

        printf("%d is %s\n", i, argv[i]); 
    }
    printf("argc is %d\n", argc);
    system("PAUSE");
    return 0;
}