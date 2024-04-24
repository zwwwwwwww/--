#include<iostream>
using namespace std;

string fun(int i,int j){
	if(data[i][j]!=0) return data[i][j];
	if(j==i+1 ) return 1;
	if(j==i+2) return 2;
	data[i][j]=fun(i,j-2)+fun(i,j-1);
	return data[i][j];
}
int main(){
	intn;
	cin>>m>>n;
	cout<<fun(m,n);
	return 0;
}
