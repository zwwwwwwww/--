 #include<iostream>
#include<string>
using namespace std;
string jiemi(string s,int i,int j){
	if(i>j ) return "";
	if(s[i]>='A' && s[i]<='Z') return s[i]+jiemi(s,i+1,j);
	if(s[i]=='['){
		string s1="";
		int count=2;
		int n=s[i+1]-'0';
		if(s[i+2]>='0' and s[i+2]<='9'){
			n=n*10+s[i+2]-'0';
			count++;
		}
		int k=j;
		while(k>i){
			if(s[k]==']') break;
			k--;
		}
		string s2=jiemi(s,i+count,k-1);
		while(n) {
			s1+=s2;
			n--;
		}
		return s1+jiemi(s,k+1,j);
		
	}
	
}
int main(){
	string s="";
	cin>>s;
	cout<<jiemi(s,0,s.length()-1);
	return 0;
}
