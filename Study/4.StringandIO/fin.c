#include<stdio.h>

int main(){
	//printf ���*���Ŷ�̬�趨printf���������� 
	unsigned width,precision;
	int num=256;
	double weight=245.2;
	printf("������:\n");
	scanf("%d",&width);
	printf("num is %*d\n",width,num);
	
	printf("�������뾫��\n");
	scanf("%d %d",&width,&precision);
	printf("Weight is %*.*f\n",width,precision,weight);
	
	//scanf �н�*�ŵ�%��ת���ַ�֮�䣬������������������
	
	int n;
	printf("������3������:\n");
	scanf("%*d %*d %d",&n);
	printf("The last one is: %d\n",n);
	//�ڶ�ȡ�ļ����ض��е�ʱ��������ܱȽ����� 
	
	 
	return 0;
}
