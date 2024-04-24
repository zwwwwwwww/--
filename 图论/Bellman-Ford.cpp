#include<bits/stdc++.h>
using namespace std;
struct Edge{
	int u,v,w;
}edge[200010];
int head[10005];
int ans[10005];

int main(){
	int n,m,s;
	cin>>n>>m>>s;
	for(int i=1;i<=n;i++)
	{
		head[i]==-1;
		ans[i]=0x3f3f3f3f;
	}
	for(int i=0;i<m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		edge[i].u=u;
		edge[i].v=v;
		edge[i].w=w;
		 
	}
	
	ans[s]=0;
	for(int k=1;k<=n-1;k++){
		for(int j=0;j<m;j++){
			
			if(  ans[edge[j].v]>ans[edge[j].u]+edge[j].w){
				ans[edge[j].v]=ans[edge[j].u]+edge[j].w;
			}
		}
	}
	for(int i=1;i<=n;i++)
		cout<<ans[i]<<" ";
	return 0;
} 
