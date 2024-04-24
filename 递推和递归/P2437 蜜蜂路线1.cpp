#include<iostream>
using namespace std;
int data[1001][1001]; 
int len=1;
void fun(int i){
	int t=0;
	for(int j=1;j<=len;j++){
		data[i][j]=(data[i-1][j]+data[i-2][j]+t)%10;
		t=(data[i-1][j]+data[i-2][j]+t)/10;
		
	}
	if(t>0){
		len++;
		data[i][len]=t;
	}
}
int main(){
	int m,n;
	cin>>m>>n;
	data[1][1]=1;
	data[2][1]=2;
	for(int i=3;i<=n-m;i++){
		fun(i);
	}
	for(int i=len;i>=1;i--)
		cout<<data[n-m][i];
	return 0;
}
