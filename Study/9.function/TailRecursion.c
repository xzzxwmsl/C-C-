#include"../head.h"
long fun(int n){
    if(n<=1){
        return 1;
    }else{
        return n * fun(n - 1);
    }
}

long fun2(int n){
    long ans;
    if(n>=1){
        ans = n * fun2(n - 1);
    }else{
        ans = 1;
    }
    return ans;
}

void to_binary(int n){
    int r;
    r = n % 2;
    if(n/2!=0){
        to_binary(n / 2);
    }
    putchar(r == 0 ? '0' : '1');
}
int main(){

    int n;

    printf("%ld %ld\n", fun(5), fun2(5));

    //递归适用于处理倒序
    printf("TO_BINARY\n");
    while(scanf("%d", &n)==1){
        to_binary(n);
        printf("\n");
    }
    
    system("PAUSE");
    return 0;
}