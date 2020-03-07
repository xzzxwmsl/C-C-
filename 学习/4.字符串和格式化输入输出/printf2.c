#include<stdio.h>
#define ME "I COME FROM SCU" 
#define PAGES 336
#define WORDS 65618
int main(){
	
	
	printf("%x %X %#x in int is %d\n",31,31,31,31);
	printf("**%5d**,**%5.3d**,**%05.3d**,**%05d**\n",6,6,6,6);//%.数字d 会生成足够的前导0. 如果它与0修饰符同时出现，会忽略0修饰符 
	
	//in string 
	printf("[%2s]\n",ME);
	printf("[%24s]\n",ME);
	printf("[%24.6s]\n",ME);//.6表示只能输出6个字符 
	printf("[%-24.6s]\n",ME);//左对齐 
	
	short num = PAGES;
	short mnum = -PAGES;
	printf("sizeof short is %zd\n",sizeof(short));
	
	printf("num as short and unsigned short: %hd %hu\n",num,num);
	printf("-num as short and unsigned short: %hd %hu\n",mnum,mnum);
	//使用2进制补码保存signed数
	
	printf("num as int and char: %d %c\n",num,num);//char = num % 256 (只取低八位)
	printf("words as int, short and char: %d %hd %c\n",WORDS,WORDS,WORDS);//short 取其低2字节打印
	 
	return 0;
} 
