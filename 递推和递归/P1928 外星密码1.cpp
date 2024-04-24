#include<iostream>
#include<string>
using namespace std;
string jiemi(string s,int i){
	string s1="";
		
	while(i<s.length()){		
		if(s[i]=='['){
			
			i++;
			int n=s[i]-'0';
			if(s[i+1]>='0' and s[i+1]<='9'){
				n=n*10+s[i+1]-'0';
				i++;
			}
			
			string s2=jiemi(s,i+1);
		
			while(n) {
				s1+=s2;
				n--;
			}
			int count=-1,j=1;
			while(count!=0){
				if(s[i+j]=='[') count--;
				else if (s[i+j]==']') count++;
				j++;
			}
			i=i+j-1;
			
		}else {
			if(s[i]==']') return s1;
			else  s1+=s[i];
				
		}
		i++;	
	
	}
	return s1; 
	
}
int main(){
	string s="";
	cin>>s;
	cout<<jiemi(s,0);
	return 0;
}
