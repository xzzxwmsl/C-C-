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
	printf("size of int :%d short:%d long:%d double:%d char:%d long long:%d float:%d\n",sizeof(int),sizeof(short),sizeof(long),sizeof(double),sizeof(char),sizeof(long long),sizeof(float)); 	
	int x=100;
	printf("dec:%d, octal:%o, hex:%x\n",x,x,x);
	printf("dec:%d, octal:%#o, hex:%#x\n",x,x,x); //d十进制  o八进制 x十六进制 
	
	int y=(1<<31)-1;
	printf("int y max is :%d, and 溢出后 is %d\n",y,y+1); //溢出后按补码规则，成为 -2^31 
	
	unsigned z=(1<<31)+100;
	printf("z is %u, if not use unsigned is %d\n",z,z);
	/*
	unsigned 无符号数，表示从 0——xxx的数
	
	signed是强调使用有符号类的作用，加强代码可读性，无实际用途 
	
	*/	
	
	char a,b,c;
	a=65,b='A';
	c=a+1;
	printf("a:%c, b:%c, c:%c\n",a,b,c);
	
	printf("\\ \" kkk\n");
	// _Bool flag=true; C11标准 
	// printf(flag);
	
	
}	

