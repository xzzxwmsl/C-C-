#include<stdio.h>
int main(){
	float a,b,c;//a=b*c
	scanf("%f %f",&b,&c);
	printf("the value of b*c is: %5.2f\n",b*c);//��ʾ����5λ����������ǰ�ÿո��롣 .2��ʾ����С�����2λ 
	
	scanf("%f %f",&b,&c);
	a=b+c;
	printf("the value of b+c is:%.2f\n",a);
	
	int x=10;
	
	printf("%.2d and %.2f",x,x);// 10 and 0.00   float�������int 

	
	return 0;
} 
