#include<iostream>
#include<cmath>
using namespace std;
int data[30];
int ans=0;
int n,k;
bool Isprime(int n){
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0) return false;
	return true;
}
void fun(int m,int count,int sum){
	if(count==k){
		if(Isprime(sum)) ans++;
	}else{
		for(int i=m;i<n;i++){
			fun(i+1,count+1, sum+data[i]);
		}
	}
}
int main(){
	
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>data[i];
	}
	fun(0, 0,0);
	cout<<ans;
	return 0;
} 
