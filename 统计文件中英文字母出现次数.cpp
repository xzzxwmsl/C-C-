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
	int a=65;//��д��ĸA 
	int b=97;//Сд��ĸa 
	for(int i=0;i<26;i++){
		low[i]=a++;//�� a~~zװ��low 
		up[i]=b++;//�� A~~Zװ��up 
		lownum[i]=upnum[i]=0; 
	}
}
void File::Read(){
	cout<<"�������ȡ���ļ�\n";
	string path;
	cin>>path;
	ifstream file;
	file.open(path);
	if(!file.is_open()){
		cout<<"���ļ�ʧ�ܣ�\n";
		return;
	}
	while(file.good()){
		char k;
		file>>k;
		//�ж��ַ����� 
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
		cout<<up[i]<<" "<<upnum[i]<<"��\t";
		cout<<low[i]<<" "<<lownum[i]<<"��\n"; 
	}
}
int main(){
	File file;
	file.Read();
	file.Show();
} 
