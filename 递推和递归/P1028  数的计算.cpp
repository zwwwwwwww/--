#include<iostream>
using namespace std;
int fun(int n){
	if(n==1) return 1;
	int num=1;
	for(int i=n/2;i>0;i--){
		num+=fun(i); 
	}
	return num;
}
int main(){
	int n;
	cin>>n;
	cout<<fun(n);
	return 0;
}
