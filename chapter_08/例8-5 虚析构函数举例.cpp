//Àı8-5.cpp ĞéÎö¹¹º¯Êı¾ÙÀı

#include<iostream>
using namespace std;

class Base{
	public:
		~Base();
}; 
Base::~Base(){
	cout<<"Base destructor"<<endl;
}

class Derived:public Base{
	public:
		Derived();
		~Derived();
	private:
		int *p;
};
Derived::Derived(){
	p=new int(0);
}
Derived::~Derived(){
	cout<<"Derived destructor"<<endl;
    delete p;
}

void fun(Base *b){
	delete b;
}

int main(){
	Base *b=new Derived();
	fun(b);
	return 0;
}
