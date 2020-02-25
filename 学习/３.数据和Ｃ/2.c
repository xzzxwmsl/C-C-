#include<stdio.h>
int main(){
    //数据类型关键字如下
	/*
	K&R给出的关键字 ：
	int long short unsigned char float double
	
	C90标准：
	signed， void
	
	C99标准：
	_Bool, _Complex, _Imaginary 
	表示布尔值，复数，虚数 
	
	*/ 
	printf("size of int :%d short:%d long:%d double:%d char:%d long long:%d\n",sizeof(int),sizeof(short),sizeof(long),sizeof(double),sizeof(char),sizeof(long long)); 	
	int x=100;
	printf("dec:%d, octal:%o, hex:%x",x,x,x);
	printf("dec:%d, octal:%#o, hex:%#x",x,x,x);
}	

