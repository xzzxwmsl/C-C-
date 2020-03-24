#include<stdio.h>
int main(){
	float a,b,c;//a=b*c
	scanf("%f %f",&b,&c);
	printf("the value of b*c is: %5.2f\n",b*c);//表示最少5位，不足则用前置空格补齐。 .2表示截至小数点后2位 
	
	scanf("%f %f",&b,&c);
	a=b+c;
	printf("the value of b+c is:%.2f\n",a);
	
	int x=10;
	
	printf("%.2d and %.2f",x,x);// 10 and 0.00   float不能输出int 

	
	return 0;
} 
