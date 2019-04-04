#include<iostream>
using namespace std;

int comm(int n,int k){
	if(k>n)
	    return 0;
	else if(n==k||k==0)
	    return 1;
	else
	    return comm(n-1,k)+comm(n-1,k-1);
}

int main(){
	int n,k;
	cout<<"Please enter two integers n and k: ";
	cin>>n>>k;
	cout<<"C(n,k)="<<comm(n,k)<<endl;
	return 0;
}
