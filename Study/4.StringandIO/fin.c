#include<stdio.h>

int main(){
	//printf ÀïµÄ*Æð×Å¶¯Ì¬Éè¶¨printf²ÎÊýµÄ×÷ÓÃ 
	unsigned width,precision;
	int num=256;
	double weight=245.2;
	printf("ÊäÈë¿í¶È:\n");
	scanf("%d",&width);
	printf("num is %*d\n",width,num);
	
	printf("ÊäÈë¿í¶ÈÓë¾«¶È\n");
	scanf("%d %d",&width,&precision);
	printf("Weight is %*.*f\n",width,precision,weight);
	
	//scanf ÖÐ½«*·Åµ½%ºÍ×ª»»×Ö·ûÖ®¼ä£¬Æð×ÅÌø¹ýÊä³öÏîµÄ×÷ÓÃ
	
	int n;
	printf("ÇëÊäÈë3¸öÊý×Ö:\n");
	scanf("%*d %*d %d",&n);
	printf("The last one is: %d\n",n);
	//ÔÚ¶ÁÈ¡ÎÄ¼þÖÐÌØ¶¨ÁÐµÄÊ±ºò£¬Õâ¸ö¹¦ÄÜ±È½ÏÓÐÓÃ 
	
	 
	return 0;
}