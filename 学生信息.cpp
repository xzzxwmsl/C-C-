#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<set>
#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;
//int tree[1<<20];
int main(){
	char str[110];
	int len=strlen(str);
	if(isalpha(str[0])) str[0]=toupper(str[0]);
	for(int i=1;i<len;i++){
		if( isalpha(str[i]) && ( str[i-1]==' ' || str[i-1]=='\t' || str[i-1]=='\n' || str[i-1]=='\r') ) str[i] = toupper(str[i]);
	} 
	cout<<str<<endl;
	
	
	
	
	return 0;
	
}
