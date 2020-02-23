#include"A.h"
#include<string>
#include<iostream>
A::A(int num_a,std::string str){
   a=num_a;
   b=str;
} 
A::A(){}
void A::Set(int num_a,std::string str){
	a=num_a;
	b=str;
}
void A::Show(){
	std::cout<<a<<"\n";
	std::cout<<b<<"\n";
}
