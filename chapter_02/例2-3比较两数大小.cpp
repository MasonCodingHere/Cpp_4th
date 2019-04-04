//比较两个数的大小 

#include <iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"Enter x and y:";
	cin>>x>>y;
	
	if(x!=y)
	    if(x>y)
	        cout<<"x>y"<<endl;
	    else
	        cout<<"x<y"<<endl;
	else
	    cout<<"x=y"<<endl;
	return 0;
} 
