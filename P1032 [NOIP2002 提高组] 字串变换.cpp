#include<iostream>
using namespace std;
int main(){
	string a;
	string b;
	string data[10][2];
	int l=0;
	while(cin>>data[l][0]>>data[l][1]) l++;
	
	for(int i=0;i<l;i++){
		cout<<data[i][0]<<" "<<data[i][1]<<endl;
	}
	
	return 0;
}
