#include<stdio.h>

int main(){
	//printf 里的*起着动态设定printf参数的作用 
	unsigned width,precision;
	int num=256;
	double weight=245.2;
	printf("输入宽度:\n");
	scanf("%d",&width);
	printf("num is %*d\n",width,num);
	
	printf("输入宽度与精度\n");
	scanf("%d %d",&width,&precision);
	printf("Weight is %*.*f\n",width,precision,weight);
	
	//scanf 中将*放到%和转换字符之间，起着跳过输出项的作用
	
	int n;
	printf("请输入3个数字:\n");
	scanf("%*d %*d %d",&n);
	printf("The last one is: %d\n",n);
	//在读取文件中特定列的时候，这个功能比较有用 
	
	 
	return 0;
}
