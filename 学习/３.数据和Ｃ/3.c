#include<stdio.h>
#include<inttypes.h>
int main(){
	
	int32_t i=19;
	printf("%d\n",i);
	
	float a=0.13e4;
	double b=1200;
	printf("a is : %f, and b is : %f, a of 指数计数法 :%e, b of 指数计数法: %e\n",a,b,a,b);
	printf("%f\n",a+1-b);
	
	int i1=1.99;
	float f1=1.1234567;
	printf("int 1.99 is:%d, float 1.1234567 is: %f, int of float:%f \n",i1,f1,i1);//int小数形式会损失精度，float小数点后6位有效
	int ii=(1<<31)-1;
	printf("ii is %d, of float is %f\n",ii,ii); 
	printf("float %f  of int %d",f1,f1);
	//缓冲区发送到屏幕（刷新缓冲区）：
//	1. 缓冲区满
//	2. 遇到换行符 \n
//	3. 遇到输入时 

} 
