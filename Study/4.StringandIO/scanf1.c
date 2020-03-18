#include<stdio.h>
int main(){
	/*
	%c ->char
	%d %i -> 十进制整数
	%e,%f,%g,%a 浮点数
	%o -> 八进制
	%x -> 十六进制
	%s 字符串
	%p 指针(地址) 
	%u 无符号十进制整数 
	*/
	int x;
	scanf("%X",&x);
	printf("the value is: %d\n",x); 
	
	/*
	修饰符
	* 抑制赋值
	数字 最大字段宽度——当到达最大字段宽度或第一个空白字符时停止赋值
	hh (un)signed char
	ll (unsigned) long long
	h,l,L 
	*/
	
	int num;
	char s[10];
	scanf("%d %s",&num,s);
	
	printf("%d %s\n",num,s);
	
	//除了%c，其他都会自动跳过空白
	//%c从第一个字符开始读取，而空白%c从第一个非空白字符开始读取 
	return 0; 
} 
