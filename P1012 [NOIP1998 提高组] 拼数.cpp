#include<iostream>
#include<string> 
using namespace std;
int mycompare(string a,string b){
	for(int k=0;k<a.length()&&k<b.length();k++){
		if(a[k]-'0'==b[k]-'0'){
			continue;
		}
		else if(a[k]-'0'>b[k]-'0'){
			return 1;
		}
		else{
			return 0;
		}
	}
	if(a.length()<b.length()) return 1;
	return 0;
}
int main(){
	int n,num;
	int nums[30];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		nums[i]=num;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++){
			string a=to_string(nums[i]);
			string b=to_string(nums[j]);
			if(mycompare( a, b)==0){
				int t=nums[i];
				nums[i]=nums[j];
				nums[j]=t;
			}
		}
	}
	for(int i=0;i<n;i++)
		cout<<nums[i];       
	return 0;
} 
