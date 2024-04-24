#include<bits/stdc++.h>
using namespace std;
int visited[105];
int g[105][105];
int g1[105][105];
int ans[105];
int n,m,d,a,b;
void dijkstra(int a){
	priority_queue<pair<int,int> >q;
	ans[a]=0;
	q.push(make_pair(0,a));
	while(q.size()){
		int t=q.top().second;
		q.pop();
		if(visited[t]) continue;
		visited[t]=1;
		for(int i=1;i<=n;i++){
			if(ans[i]>ans[t]+g[t][i]){
				ans[i]=ans[t]+g[t][i];
				q.push(make_pair(-ans[i],i));
			}
		}
	}
	
	
	
}
int main(){
	
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		ans[i]=0x3f3f3f3f;
		for(int j=1;j<=n;j++){
			g[i][j]=0x3f3f3f3f;
			g[j][i]=0x3f3f3f3f;
			g1[i][j]=1;
			g1[j][i]=1;
		}
	}
	for(int i=0;i<m;i++)
	{
		int u,v,w;
		cin>>u>>v>>w;
		if(g[u][v]>w)
		{
			g[u][v]=w;
			g[v][u]=w;
			g1[u][v]=0;
			g1[v][u]=0;
		}
		
	}
	cin>>d;
	for(int i=0;i<d;i++)
	{
		int u,v;
		cin>>u>>v;
		g1[u][v]=1;
		g1[v][u]=1;
		
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			g[i][j]*=g1[i][j];
			g[j][i]*=g1[j][i];
		}
	}
	cin>>a>>b;
	dijkstra(a);
	cout<<ans[b];
	return 0;
}
