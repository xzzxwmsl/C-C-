#include<stdio.h>
int main(){
	
	float n1=3.0;
	double n2=3.0;
	long n3=2000000000;
	long n4=1234567890;
	printf("sizeof long, float, double is %zd %zd %zd\n",sizeof(long),sizeof(float),sizeof(double));
	printf("%.1e %.1e %.1e %.1e\n",n1,n2,n3,n4);
	//%e 使得系统认为将要打印double，因此会查看n3附近8字节的值（n3的4字节，加 其周围的4字节）。所以会得到无意义的数
	//float 会被转化为double打印 
	printf("%ld %ld\n",n3,n4);
	printf("%ld %ld %ld %ld\n",n1,n2,n3,n4);
	printf("%f %f %d %ld\n",n1,n2,n3,n4);
	
	//the return value of printf()
	
	int x=printf("Hello SCU\n");
	printf("the value of x is %d\n\n",x);//包括换行符\n 
	
	// printf the long text 
	printf("Here is the first way");
	printf("to printf the long text.\n");
	
	printf("Here is the second way to \
printf the long text.\n"); // use \ to exchange line
	
	printf("Here is the third way to "
	"printf the long text.\n");
} 
