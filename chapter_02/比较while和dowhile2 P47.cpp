#include<iostream>
using namespace std;

int main(){
	int i,sum=0;
	cin>>i;
    do{
		sum+=i;
		i++;
	}while(i<=10);
	cout<<"sum="<<sum<<endl;
}
