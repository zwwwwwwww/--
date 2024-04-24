#include<iostream>
using namespace std;
int data[1001];
int fun(int n){
	if(data[n]!=0) return data[n]; 
	if(n==1) return 1;
	int num=1;
	for(int i=n/2;i>0;i--){
		num+=fun(i); 
	}
	data[n]=num;
	return num;
}
int main(){
	int n;
	cin>>n;
	cout<<fun(n);
	return 0;
}
