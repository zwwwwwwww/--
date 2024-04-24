#include<iostream>
using namespace std;
int k=0;

void mov(int n, char a,char c,char b){
	if(n==1) cout<<a<<"-->"<<c<<endl;
	else{
		mov(n-1,a,b,c);
		cout<<a<<"-->"<<c<<endl;
		mov(n-1,b,c,a);
	}
	
}
             


int main(){
	mov(2,'a','c','b');
	return 0;
} 
