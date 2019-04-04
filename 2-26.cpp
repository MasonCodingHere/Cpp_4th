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
