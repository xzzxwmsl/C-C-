#include<stdio.h>
#include<string.h>

#define C_PI 3.1415926

const int PI=3.1415926;
int main(){
    char s[10];
	scanf("%s",s);
	printf("size of s is: %zd, len of s is: %d\n",sizeof(s),strlen(s));	
	
	//ת��˵��
	
	// %a %A ��������ʮ�������� 
	// %e ��������e������
	// %f ������Ʒ�
	// %g ����ֵ��ͬ�Զ�ѡ��%e�� %f�� %e���ڱ�ʾָ��С��-4 ���߳������ȵø�����
	// %o�޷��Ű˽��� %x�޷���ʮ������ %pָ�� 
	// %i=%d �з���ʮ���� %u �޷���ʮ����
	// %% �ٷֺ� 
	int num=20;
	float f=1.321,ff=1.1111111;
	printf("use %%a is %a, use %%d is %d, use %%o is %o, use %%x is %x\n",num,num,num,num); 
	
	
	//ת��˵�����η�
	
	// - ����ӡ�������
	// + ��������ʾ+��������ʾ-
	// �ո� ����ǰ���ո񣬸���-
	// # %o����0��ʼ�� %x����0x��ʼ
	// 0 ǰ����0���� 
	// ���� ��̿��
	
	/* .����  
	%e��%f��%g ��ʾС�����ұߵ�λ��
	%g ��Ч�������λ��
	%s ����ӡ�ַ����������
	����ת�� ����ӡ���ֵ���Сλ��
	ֻʹ�� . == .0 
	*/ 
	
	// h ��ʾshort int��unsigned short int
	// hh signed char �� unsigned char
	// L long double
	// l ��unsigned��long int 
	// ll ��unsigned�� long long int
	
	printf("*%d*\n",num); 
	printf("*%2d*\n",num); 
	printf("*%5d*\n",num); 
	printf("*%05d*\n",num); 
	printf("*%-5d*\n",num);
	
	printf("use - is *%-5d*\n",num);
	printf("use + is %+d, %+d\n",num,-num); 
	printf("use ' ' is % d, % d\n",num,-num); 
	const double F=3852.99;
	printf("*%f*\n",F);//Ĭ��С�������λ 
	printf("*%e*\n",F);//С�������Ĭ��һλ���� 
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
