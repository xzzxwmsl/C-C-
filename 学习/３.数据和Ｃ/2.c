#include<stdio.h>
int main(){
    //�������͹ؼ�������
	/*
	K&R�����Ĺؼ��� ��
	int long short unsigned char float double
	
	C90��׼��
	signed�� void
	
	C99��׼��
	_Bool, _Complex, _Imaginary 
	��ʾ����ֵ������������ 
	
	*/ 
	printf("size of int :%d short:%d long:%d double:%d char:%d long long:%d float:%d\n",sizeof(int),sizeof(short),sizeof(long),sizeof(double),sizeof(char),sizeof(long long),sizeof(float)); 	
	int x=100;
	printf("dec:%d, octal:%o, hex:%x\n",x,x,x);
	printf("dec:%d, octal:%#o, hex:%#x\n",x,x,x); //dʮ����  o�˽��� xʮ������ 
	
	int y=(1<<31)-1;
	printf("int y max is :%d, and ����� is %d\n",y,y+1); //����󰴲�����򣬳�Ϊ -2^31 
	
	unsigned z=(1<<31)+100;
	printf("z is %u, if not use unsigned is %d\n",z,z);
	/*
	unsigned �޷���������ʾ�� 0����xxx����
	
	signed��ǿ��ʹ���з���������ã���ǿ����ɶ��ԣ���ʵ����; 
	
	*/	
	
	char a,b,c;
	a=65,b='A';
	c=a+1;
	printf("a:%c, b:%c, c:%c\n",a,b,c);
	
	printf("\\ \" kkk\n");
	// _Bool flag=true; C11��׼ 
	// printf(flag);
	
	
}	

