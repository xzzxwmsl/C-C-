#include<stdio.h>
#include<string.h>

#define C_PI 3.1415926

const int PI=3.1415926;
int main(){
    char s[10];
	scanf("%s",s);
	printf("size of s is: %zd, len of s is: %d\n",sizeof(s),strlen(s));	
	
	//转换说明
	
	// %a %A 浮点数，十六进制数 
	// %e 浮点数，e记数法
	// %f 浮点进制法
	// %g 根据值不同自动选择%e， %f。 %e用于表示指数小于-4 或者超过精度得浮点数
	// %o无符号八进制 %x无符号十六进制 %p指针 
	// %i=%d 有符号十进制 %u 无符号十进制
	// %% 百分号 
	int num=20;
	float f=1.321,ff=1.1111111;
	printf("use %%a is %a, use %%d is %d, use %%o is %o, use %%x is %x\n",num,num,num,num); 
	
	
	//转换说明修饰符
	
	// - 待打印项左对齐
	// + 若正数显示+，负数显示-
	// 空格 正数前导空格，负数-
	// # %o则以0开始， %x则以0x开始
	// 0 前导以0补充 
	// 数字 最短宽度
	
	/* .数字  
	%e，%f，%g 表示小数点右边得位数
	%g 有效数字最大位数
	%s 待打印字符得最大数量
	整型转换 待打印数字得最小位数
	只使用 . == .0 
	*/ 
	
	// h 表示short int，unsigned short int
	// hh signed char 或 unsigned char
	// L long double
	// l （unsigned）long int 
	// ll （unsigned） long long int
	
	printf("*%d*\n",num); 
	printf("*%2d*\n",num); 
	printf("*%5d*\n",num); 
	printf("*%05d*\n",num); 
	printf("*%-5d*\n",num);
	
	printf("use - is *%-5d*\n",num);
	printf("use + is %+d, %+d\n",num,-num); 
	printf("use ' ' is % d, % d\n",num,-num); 
	const double F=3852.99;
	printf("*%f*\n",F);//默认小数点后六位 
	printf("*%e*\n",F);//小数点左侧默认一位数字 
	printf("*%g*\n",F);
	printf("*%4.2f*\n",F);
	printf("*%3.1f*\n",F);
	printf("*%10.3f*\n",F);
	printf("*%10.3E*\n",F);
	printf("*%+4.2f*\n",F);
	printf("*%010.2f*\n",F);
	
	printf("use %%#, o is %#o, x is %#x\n",num,num); 
	return 0; 
} 
