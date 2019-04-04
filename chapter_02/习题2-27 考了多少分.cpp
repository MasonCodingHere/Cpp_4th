//习题2-27.向用户提问“你考试考了多少分？（0～100）”，接受输入后判断其等级显示出来。规则如下：
//优（90～100）、良（80～90）、中（60～80）、差（0～60）。 




#include<iostream>
using namespace std;

int main(){
	int score;
	cout<<"你考试考了多少分？（0～100）"<<endl;
	cin>>score;
	if(score>=90&&score<=100)
	    cout<<"优"<<endl;
	else if(score>=80&&score<90)
	    cout<<"良"<<endl;
	else if(score>=60&&score<80)
	    cout<<"中"<<endl;
	else
	    cout<<"差"<<endl;
	return 0; 
} 
