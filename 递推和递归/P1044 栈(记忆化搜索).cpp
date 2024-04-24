#include<iostream>
using namespace std;
int data[20][20];
int fun(int i,int j){
	if( i==0) return 1;
	if(data[i][j]!=0) return data[i][j];
	if(j==0) data[i][j]=fun(i-1,j+1);
	else data[i][j]=fun(i-1,j+1)+fun(i,j-1); 
	return data[i][j];
}

int main() 
{
	int n; 
	cin>>n;
	cout<<fun(n,0);
	return 0;
}  
