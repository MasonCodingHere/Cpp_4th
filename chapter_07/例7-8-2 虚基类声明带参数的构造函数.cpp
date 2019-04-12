//虚基类及其派生类构造函数
//虚基类声明了带参数的构造函数

#include<iostream>
using namespace std;

class Base0{                            //定义基类Base0 
	public:                             //外部接口 
		Base0(int var):var0(var){}
		int var0;
		void fun0(){cout<<"Member of Base0"<<endl;}
}; 

class Base1:virtual public Base0{         //Base0为虚基类，派生Base1类 
	public:                               //新增外部接口 
		Base1(int var):Base0(var){}
		int var1;
};

class Base2:virtual public Base0{         //Base0为虚基类，派生Base2类 
	public:                               //新增外部接口 
		Base2(int var):Base0(var){}
		int var2;
};

class Derived:public Base1,public Base2{   //派生类Derived定义 
	public:                                //新增外部接口 
		Derived(int var):Base0(var),Base1(var),Base2(var){}
		int var;
		void fun(){cout<<"Member of Derived"<<endl;}
};

int main(){                                //程序主函数 
	Derived d(1);                             //定义Derived类对象d 
	d.var=2;
	d.fun();
	return 0;
}
