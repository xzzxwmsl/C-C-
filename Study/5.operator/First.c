#include <stdio.h>
#include <windows.h>
int main()
{

	//数据对象： 用于储存值的数据存储区域
	//左值	含可修改的左值和不可修改的左值，用于标识或者定位存储位置的标签
	//右值	常为常量，变量或可求值得表达式

	//赋值顺序从右往左
	int ja, jb, jc;
	ja = jb = jc = 10;
	// 10 --> jc --> jb --> ja;

	printf("int div 7/4 is %d\n", 7 / 4);
	printf("float div 7./4. is %1.2f\n", 7. / 4.);
	printf("float div 7.0/4.0 is %1.2f\n", 7.0 / 4.0);
	printf("mixed div 7./4 is %1.2f\n", 7. / 4);

	//优先级
	/*
		   运算符		  						 结合律 
			1.()		  						从左往右 
			2.+ - （一元，即正负号）		    从右往左 
			1.* /		  						从左往右 
			1.+ - （二元，即加减）		  		从左往右 
			1.=		  						    从右往左 
			
			如，-8就是从右往左，8与负号结合
			9-8 是从左往右结合 
	*/
	system("pause");
	return 0;
}