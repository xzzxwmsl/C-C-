#include<stdio.h>
int main(){
	
	float n1=3.0;
	double n2=3.0;
	long n3=2000000000;
	long n4=1234567890;
	printf("sizeof long, float, double is %zd %zd %zd\n",sizeof(long),sizeof(float),sizeof(double));
	printf("%.1e %.1e %.1e %.1e\n",n1,n2,n3,n4);
	//%e ʹ��ϵͳ��Ϊ��Ҫ��ӡdouble����˻�鿴n3����8�ֽڵ�ֵ��n3��4�ֽڣ��� ����Χ��4�ֽڣ������Ի�õ����������
	//float �ᱻת��Ϊdouble��ӡ 
	printf("%ld %ld\n",n3,n4);
	printf("%ld %ld %ld %ld\n",n1,n2,n3,n4);
	printf("%f %f %d %ld\n",n1,n2,n3,n4);
	
	//the return value of printf()
	
	int x=printf("Hello SCU\n");
	printf("the value of x is %d\n\n",x);//�������з�\n 
	
	// printf the long text 
	printf("Here is the first way");
	printf("to printf the long text.\n");
	
	printf("Here is the second way to \
printf the long text.\n"); // use \ to exchange line
	
	printf("Here is the third way to "
	"printf the long text.\n");
} 
