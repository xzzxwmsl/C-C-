#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void rand32h(char d[32])
{
//    int result;
//	unsigned char i,n3;
//
//    srand( (unsigned)time( 0 ) ); //设置随机数种子
//	//要点：rand()给出的随机数为15位, 
//	//      要想得到更多位, 采用拼接的方法。
//	//      每次用其中12位得到3个十六进制数
//
//	for (n3=i=0;i<32;)
//	{
//		if (n3==0) {result = rand(); n3=3;}
//		
//		d[i++]=result&15;  
//		result>>=4; --n3;
//	}
    int i;
    unsigned int seedVal;
    struct timeb timeBuf;
    ftime(&timeBuf);
    seedVal=((((unsigned int)timeBuf.time&0xFFFF)+
                 (unsigned int)timeBuf.millitm)^
                 (unsigned int)timeBuf.millitm);
    srand((unsigned int)seedVal);
    for(i=0;i<32;++i)
        d[i]=rand();
}

void print_hex(char *d, int n)
{
	const char hextable[]="0123456789ABCDEF";
	while(n--) putchar(hextable[*d++&15]);
}

char d[2001][32]; 
int main()
{	
	 //用来存储32个16进制随机数
	for(int i=0;i<2000;i++){
		rand32h(d[i]);       //产生随机数
	    print_hex(d[i],32);  //显示随机数
	    putchar('\n');
	}
	
	return 0;
}
