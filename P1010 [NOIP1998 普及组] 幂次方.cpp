#include<iostream>
#include<cmath>
using namespace std;
void fun(int n){
	
	for(int i=20;i>=0;i--){
		if(pow(2,i)<=n){
			if(i==0) cout<<"2(0)";
			else if(i==1) cout<<"2";
			else{
				cout<<"2(";
				fun(i);
				cout<<")";
			}
			n-=pow(2,i);
			if(n!=0){
				cout<<"+";
			}
		}
		
	}
} 
int main(){
	int n;
	cin>>n;
	fun(n);
	return 0;
}
