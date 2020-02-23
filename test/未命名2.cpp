#include<stdio.h>
int main(){
	for(int i=2;i<=10000;i++){
	int sum=0;
		for(int j=1;j<i;j++){
			if(i%j==0) sum=sum+j;
		}
		if(sum==i) printf("%d\n",i);	
}
	return 0;
} 
