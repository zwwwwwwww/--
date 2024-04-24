#include<bits/stdc++.h>
using namespace std;
int d,p,c,f;
int g[500][500];
int cnt[500];
int ans[500];
int visited[500];
int SPFA(int s){
	ans[s]=0;
	queue<int>q;
	q.push(s);
	visited[s]=1;
	while(q.size()){
		int t=q.front();
		
		
		q.pop();
		visited[t]=0;
		for(int i=1;i<=c;i++){
			if(ans[i]>ans[t]+g[t][i]){
				ans[i]=ans[t]+g[t][i];
				cnt[i]=cnt[t]+1;
				if(cnt[i]>c) return 1;
				if(visited[i]==0) {
					q.push(i);
					visited[i]=1;
				}
				
			}
		}
		

		
		
	}
	return 0;
	
}
int main(){
	cin>>d>>p>>c>>f;
	for(int i=1;i<=c;i++){
		g[0][i]=-d;
		for(int j=1;j<=c;j++){
			g[i][j]=0x3f3f3f3f;
		}
	}
	
	
	for(int i=0;i<p;i++){
		int u,v;
		cin>>u>>v;
		g[u][v]=-d;
		
	}
	for(int i=0;i<f;i++){
		int u,v,w;
		cin>>u>>v>>w;
		if(w<g[u][v]+d) g[u][v]=w-d;
		
	}
	memset(ans,0x3f,sizeof(ans));
	if(SPFA(0)) cout<<"orz";
	else{
		int min=d;
		for(int i=0;i<=c;i++){
			if(min>ans[i]) min=ans[i];
		}
		cout<<-min;
	}
	return 0;
}
