#include"../head.h"
void swap(int *p, int *k){
    int t = *p;
    *p = *k;
    *k = t;
}
int main(){
    int p = 1, k = 2;
    printf("p = %d, and address is %p\n", p, &p);
    swap(&p, &k);
    printf("Now p is %d, k is %d\n", p, k);
    system("pause");
    return 0;
}