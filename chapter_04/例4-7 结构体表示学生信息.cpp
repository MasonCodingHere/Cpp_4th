//用结构体表示学生的基本信息 

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct Student{                                      //学生信息结构体 
	int num;                                         //学号 
	string name;                                     //姓名 
	char sex;                                        //性别 
	int age;                                         //年龄 
};

int main(){
	Student stu={2014307,"Xu Naonao",'M',23};
	cout<<"Num:  "<<stu.num<<endl;
	cout<<"Name:    "<<stu.name<<endl;
	cout<<"Sex:    "<<stu.sex<<endl;
	cout<<"Age:    "<<stu.age<<endl;
	return 0;
}
