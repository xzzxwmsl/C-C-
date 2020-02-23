#include"A.h"
#include<string>
int main(){
    std::string str="xzz";
	A a;
	a.Set(1998,str);
	a.Show();
	A b(2,str);
	b.Show();
	A *c=new A(3,str);
	//c->Set(3,str);
	(*c).Show();
}
