#include<stdio.h>
#define ME "I COME FROM SCU" 
#define PAGES 336
#define WORDS 65618
int main(){
	
	
	printf("%x %X %#x in int is %d\n",31,31,31,31);
	printf("**%5d**,**%5.3d**,**%05.3d**,**%05d**\n",6,6,6,6);//%.����d �������㹻��ǰ��0. �������0���η�ͬʱ���֣������0���η� 
	
	//in string 
	printf("[%2s]\n",ME);
	printf("[%24s]\n",ME);
	printf("[%24.6s]\n",ME);//.6��ʾֻ�����6���ַ� 
	printf("[%-24.6s]\n",ME);//����� 
	
	short num = PAGES;
	short mnum = -PAGES;
	printf("sizeof short is %zd\n",sizeof(short));
	
	printf("num as short and unsigned short: %hd %hu\n",num,num);
	printf("-num as short and unsigned short: %hd %hu\n",mnum,mnum);
	//ʹ��2���Ʋ��뱣��signed��
	
	printf("num as int and char: %d %c\n",num,num);//char = num % 256 (ֻȡ�Ͱ�λ)
	printf("words as int, short and char: %d %hd %c\n",WORDS,WORDS,WORDS);//short ȡ���2�ֽڴ�ӡ
	 
	return 0;
} 
