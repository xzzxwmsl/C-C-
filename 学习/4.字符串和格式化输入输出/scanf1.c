#include<stdio.h>
int main(){
	/*
	%c ->char
	%d %i -> ʮ��������
	%e,%f,%g,%a ������
	%o -> �˽���
	%x -> ʮ������
	%s �ַ���
	%p ָ��(��ַ) 
	%u �޷���ʮ�������� 
	*/
	int x;
	scanf("%X",&x);
	printf("the value is: %d\n",x); 
	
	/*
	���η�
	* ���Ƹ�ֵ
	���� ����ֶο�ȡ�������������ֶο�Ȼ��һ���հ��ַ�ʱֹͣ��ֵ
	hh (un)signed char
	ll (unsigned) long long
	h,l,L 
	*/
	
	int num;
	char s[10];
	scanf("%d %s",&num,s);
	
	printf("%d %s\n",num,s);
	
	//����%c�����������Զ������հ�
	//%c�ӵ�һ���ַ���ʼ��ȡ�����հ�%c�ӵ�һ���ǿհ��ַ���ʼ��ȡ 
	return 0; 
} 
