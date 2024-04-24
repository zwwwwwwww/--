#include<iostream>
using namespace std;
int data[10];
int Isuesd[10];
void fun(int n,int k,int count){
	
	if(count==n){
		for(int i=0;i<n;i++)
			printf("%5d",data[i]);
		cout<<endl;		
	}else{
		for(int i=1;i<=n;i++){
			if(Isuesd[i]==0){
				data[count]=i;
				Isuesd[i]=1;
				fun( n,i+1,count+1);
				Isuesd[i]=0;
			}
			
		}
	}
}
int main(){
	int n;
	cin>>n;
	fun(n,1,0);
	return 0;
} 
