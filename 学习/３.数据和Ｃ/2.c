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
	printf("size of int :%d short:%d long:%d double:%d char:%d long long:%d\n",sizeof(int),sizeof(short),sizeof(long),sizeof(double),sizeof(char),sizeof(long long)); 	
	int x=100;
	printf("dec:%d, octal:%o, hex:%x",x,x,x);
	printf("dec:%d, octal:%#o, hex:%#x",x,x,x);
}	

