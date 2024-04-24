#include<iostream>
using namespace std;
int dist[1005][1005];
long long ans=0;
int main(){
	int n,m;
	cin>>n>>m;
	int u,v,w;
	for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				dist[i][j]=0x3f3f3f3f;
		}
	}
	for(int i=0;i<m;i++){
		cin>>u>>v>>w;
		if(dist[u][v]>w) dist[u][v]=w;
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(dist[i][j]>dist[i][k]+dist[k][j]){
					dist[i][j]=dist[i][k]+dist[k][j];
				}
			}
		}
	}
	
		for(int j=2;j<=n;j++){
			ans+=dist[1][j];
			ans+=dist[j][1];
	}
	
	cout<<ans;
	return 0;
} 
