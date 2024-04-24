#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string jia(string a,string b){
	string ans;
	int len1= a.length();
	int len2=b.length();
	int len=max(len1,len2);
	int i=0,j=0; 
	int x=0;
	if(len1<len2) 
		for (int i=1;i<=len2-len1;i++)
            a="0"+a; 
	else
		for (int i=1;i<=len1-len2;i++)
            b="0"+b; 
    for(int i=len-1;i>=0;i--){
    	int m=a[i]-'0';
    	int n=b[i]-'0';
    	ans=char((x+m+n)%10+'0')+ans;
    	x=(x+m+n)/10;
	}
	if(x!=0) ans=char(x+'0')+ans;
	return ans;
}

int main(){
	int n;
	string a="0",b="1"; 
	cin>>n;
	for(int i=1;i<n+1;i++){
		
		string c=a;
		a=b;
		b=jia(c,b);
		
	
		
	}
	cout<<b;
	return 0;
} 
