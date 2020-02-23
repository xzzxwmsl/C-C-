#ifndef A_H
#define A_H
#include<string>
class A{
	private:
		int a;
		std::string b;
    public:
    	A();
    	A(int num_a,std::string str);
    	void Set(int num_a,std::string str);
    	void Show();
}; 

#endif
