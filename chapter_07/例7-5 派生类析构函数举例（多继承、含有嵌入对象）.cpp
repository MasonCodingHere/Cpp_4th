//7_5.cpp 派生类析构函数举例（多继承、含有嵌入对象）

#include<iostream>
using namespace std;

class Base1{                                //基类Base1，构造函数有参数 
	public:
		Base1(int i){cout<<"Constructing Base1 "<<i<<endl;}
		~Base1(){cout<<"Destructing Base1"<<endl;}
}; 

class Base2{                               //基类Base2，构造函数有参数
	public:
		Base2(int j){cout<<"Constructing Base2 "<<j<<endl;}
		~Base2(){cout<<"Destructing Base2"<<endl;}
};

class Base3{                               //基类Base3，构造函数无参数
	public:
		Base3(){cout<<"Constructing Base3 *"<<endl;}
		~Base3(){cout<<"Destructing Base3"<<endl;}
};

class Derived:public Base2,public Base1,public Base3{
	//派生新类Derived，注意基类名的顺序
	public:                                //派生类的公有成员 
	    Derived(int a,int b,int c,int d):Base1(a),member2(d),member1(c),Base2(b){}
		//注意基类名的个数与顺序，注意成员对象名的个数与顺序
	private:                               //派生类的私有成员对象 
	    Base1 member1;
		Base2 member2;
		Base3 member3; 
};

int main(){
	Derived obj(1,2,3,4);
	return 0;
}
