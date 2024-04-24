#include<bits/stdc++.h>
using namespace std;
struct Edge{
	int next,to,w;
}edge[200010];
int head[10005];
int ans[10005];
int book[10005];
int cnt=0;
void addEdge(int u,int v,int w){
	edge[cnt].next=head[u];
	edge[cnt].to=v;
	edge[cnt].w=w;
	head[u]=cnt++;
}
int main(){
	int n,m,s;
	cin>>n>>m>>s;
	queue<int> myqueue;
	for(int i=1;i<=n;i++)
	{
		head[i]=-1;
		ans[i]=0x3f3f3f3f;
	}
	for(int i=0;i<m;i++){
		int u,v,w;
		cin>>u>>v>>w;
		addEdge( u, v,w);
		 
	}
	
	ans[s]=0;
	myqueue.push(s);
	book[s]=1;
	while(myqueue.size()){
		int t=myqueue.front();
		myqueue.pop();
		book[t]=0;
		int k=head[t];
		while(k!=-1){
			if(ans[edge[k].to]>ans[t]+edge[k].w){
				ans[edge[k].to]=ans[t]+edge[k].w;
				
				if(book[edge[k].to]!=1 ){
					 myqueue.push(edge[k].to);
					 book[edge[k].to]=1;
				}
			}
			k=edge[k].next;
		}
		
		
	}
	
	for(int i=1;i<=n;i++)
		cout<<ans[i]<<" ";
	return 0;
} 
