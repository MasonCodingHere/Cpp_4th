//习题2-26.向用户提问“现在正在下雨吗？”，提示用户输入Y或N。
//若输入为Y，显示“现在正在下雨。”；
//若输入为N，显示“现在没有下雨。”；
//否则继续提问“现在正在下雨吗？”。 

#include<iostream>
using namespace std;

int main(){
	char que;
	cout<<"现在下雨吗？（请输入Y或N）"<<endl;
	cin>>que;
	while(que){
	if(que=='Y'){
	    cout<<"现在正在下雨。";
	    break;
	}
	else if(que=='N'){
	    cout<<"现在没有下雨。";
	    break;
	}
	else
	    cout<<"现在下雨吗？（请输入Y或N）"<<endl;
	    cin>>que;
	    continue;
	}
	return 0;
}
