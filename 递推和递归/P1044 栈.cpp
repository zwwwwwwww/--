#include<iostream>
using namespace std;
int fun(int i,int j){
	if( i==0) return 1;
	if(j==0) return fun(i-1,j+1);
	return fun(i-1,j+1)+fun(i,j-1); 
}
int main() 
{
	int n; 
	cin>>n;
	cout<<fun(n,0);
	return 0;
}  
