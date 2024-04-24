#include<bits/stdc++.h>
using namespace std;


int ans[5000][5000];
int main(){
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j) {
				
				ans[i][j]=0;
			}else{
				
				ans[i][j]=0x3f3f3f3f;
			}
			
		}
	}
	
	for(int i=1;i<=m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		if(ans[u][v]>w) 
		{
			ans[u][v]=w;
			ans[v][u]=w;
		}
	}
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(ans[i][j]>ans[i][k]+ans[k][j]){
					ans[i][j]=ans[i][k]+ans[k][j];
					
				} 
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
} 
