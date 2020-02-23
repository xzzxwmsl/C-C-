#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
class File{
	private:
		char low[26];
		char up[26];
		int lownum[26];
		int upnum[26];
	public:
		File();
		void Read();
		void Show();
};
File::File(){
	int a=65;//大写字母A 
	int b=97;//小写字母a 
	for(int i=0;i<26;i++){
		low[i]=a++;//将 a~~z装入low 
		up[i]=b++;//将 A~~Z装入up 
		lownum[i]=upnum[i]=0; 
	}
}
void File::Read(){
	cout<<"请输入读取的文件\n";
	string path;
	cin>>path;
	ifstream file;
	file.open(path);
	if(!file.is_open()){
		cout<<"打开文件失败！\n";
		return;
	}
	while(file.good()){
		char k;
		file>>k;
		//判断字符类型 
		for(int i=0;i<26;i++){
			if(k==low[i]){
				lownum[i]++;
				break;
			}else if(k==up[i]){
				upnum[i]++;
				break;
			}
		}	
	}
}
void File::Show(){
	system("cls");
	for(int i=0;i<26;i++){
		cout<<up[i]<<" "<<upnum[i]<<"次\t";
		cout<<low[i]<<" "<<lownum[i]<<"次\n"; 
	}
}
int main(){
	File file;
	file.Read();
	file.Show();
} 
